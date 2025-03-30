class SearchThread extends Thread {
    private int[] arr;
    private int target;
    private int start, end;
    private int threadIndex;

    public SearchThread(int[] arr, int target, int start, int end, int threadIndex) {
        this.arr = arr;
        this.target = target;
        this.start = start;
        this.end = end;
        this.threadIndex = threadIndex;
    }
    public void run() {
        for (int i = start; i < end; i++) {
            if (arr[i] == target) {
                System.out.println("Thread " + threadIndex + " found element at index " + i);
            }
        }
    }
}

public class Demo {
    public static void main(String[] args) {
        int[] arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
        int target = 7;
        int numThreads = 3;

        int chunkSize = (int) Math.ceil((double) arr.length / numThreads);
        Thread[] threads = new Thread[numThreads];

        for (int i = 0; i < numThreads; i++) {
            int start = i * chunkSize;
            int end = Math.min(start + chunkSize, arr.length);
            threads[i] = new SearchThread(arr, target, start, end, i);
            threads[i].start();
        }

        for (Thread thread : threads) {
            try {
                thread.join();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
