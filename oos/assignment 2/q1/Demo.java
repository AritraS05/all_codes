class ChildThread extends Thread{
    public void run(){
            System.out.println("in child thread");
    }
}

class Demo{
    public static void main(String args[]){
            ChildThread child = new ChildThread();
            child.start();
            System.out.println("in main thread");
    }
}
