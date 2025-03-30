class OddSumThread extends Thread {
    private int sum = 0;
    
    public void run() {
        for (int i = 1; i <= 99; i += 2) {
            sum += i;
        }
    }
    
    public int getSum() {
        return sum;
    }
}

class EvenSumThread extends Thread {
    private int sum = 0;
    
    public void run() {
        for (int i = 2; i <= 100; i += 2) {
            sum += i;
        }
    }
    
    public int getSum() {
        return sum;
    }
}

public class Demo {
    public static void main(String[] args) {
        OddSumThread oddThread = new OddSumThread();
        EvenSumThread evenThread = new EvenSumThread();
        
        oddThread.start();
        evenThread.start();
        
        try {
            oddThread.join();
            evenThread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        
        int totalSum = oddThread.getSum() + evenThread.getSum();
        System.out.println("Final Sum: " + totalSum);
    }
}
