class EvenThread extends Thread {
    private final Object lock;

    public EvenThread(Object lock) {
        this.lock = lock;
    }

    public void run() {
        for (int i = 2; i <= 10; i += 2) {
            synchronized (lock) {
                System.out.print(i + " ");
                lock.notify();
                try {
                    if (i < 10) {
                        lock.wait();
                    }
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}

class OddThread extends Thread {
    private final Object lock;

    public OddThread(Object lock) {
        this.lock = lock;
    }

    public void run() {
        for (int i = 1; i <= 9; i += 2) {
            synchronized (lock) {
                System.out.print(i + " ");
                lock.notify();
                try {
                    if (i < 9) {
                        lock.wait();
                    }
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}

public class Demo {
    public static void main(String[] args) {
        Object lock = new Object();

        EvenThread evenThread = new EvenThread(lock);
        OddThread oddThread = new OddThread(lock);
        oddThread.start();
        evenThread.start();
   }
}
