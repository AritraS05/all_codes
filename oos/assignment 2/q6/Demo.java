
class BinarySearchThread extends Thread {
    private int[] arr;
    private int left, right, target;
    private int result = -1;
    
    public BinarySearchThread(int[] arr, int left, int right, int target) {
        this.arr = arr;
        this.left = left;
        this.right = right;
        this.target = target;
    }
    
    public void run() {
        result = binarySearch(arr, left, right, target);
    }
    
    private int binarySearch(int[] arr, int left, int right, int target) {
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target)
                return mid;
            else if (arr[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }
    
    public int getResult() {
        return result;
    }
}

public class Demo {
    public static void main(String[] args) {
        int n = 100; 
        int[] sortedArray = new int[n];
        for (int i = 0; i < n; i++) {
            sortedArray[i] = i + 1;
        }
        int target = 67;
        int numThreads = n / 10;
        BinarySearchThread[] threads = new BinarySearchThread[numThreads];
        
        for (int i = 0; i < numThreads; i++) {
            int left = i * 10;
            int right = left + 9;
            threads[i] = new BinarySearchThread(sortedArray, left, right, target);
            threads[i].start();
        }
        
        int foundIndex = -1;
        for (int i = 0; i < numThreads; i++) {
            try {
                threads[i].join();
                if (threads[i].getResult() != -1) {
                    foundIndex = threads[i].getResult();
                }
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        
        if (foundIndex != -1) {
            System.out.println("Element found at index: " + foundIndex);
        } else {
            System.out.println("Element not found");
        }
    }
}
