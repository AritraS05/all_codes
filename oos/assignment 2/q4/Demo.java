import java.io.*;
import java.util.concurrent.*;

class Producer implements Runnable {
    private final BlockingQueue<Integer> queue;
    private final String filePath;

    public Producer(BlockingQueue<Integer> queue, String filePath) {
        this.queue = queue;
        this.filePath = filePath;
    }
    public void run() {
        try (BufferedReader br = new BufferedReader(new FileReader(filePath))) {
            String line;
            while ((line = br.readLine()) != null) {
                try {
                    int number = Integer.parseInt(line.trim());
                    queue.put(number);
                } catch (NumberFormatException e) {
                    System.err.println("Skipping invalid number: " + line);
                }
            }
            queue.put(-1); 
        } catch (IOException | InterruptedException e) {
            e.printStackTrace();
        }
    }
}

class Consumer implements Runnable {
    private final BlockingQueue<Integer> queue;
    private int sum = 0;

    public Consumer(BlockingQueue<Integer> queue) {
        this.queue = queue;
    }

    public void run() {
        try {
            while (true) {
                int number = queue.take();
                if (number == -1) {
                    break;
                }
                sum += number;
            }
            System.out.println("Total Sum: " + sum);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

public class Demo {
    public static void main(String[] args) {
        String filePath = "numbers.txt"; 
        BlockingQueue<Integer> queue = new LinkedBlockingQueue<>();
        
        Thread producerThread = new Thread(new Producer(queue, filePath));
        Thread consumerThread = new Thread(new Consumer(queue));
        
        producerThread.start();
        consumerThread.start();
        
        try {
            producerThread.join();
            consumerThread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
