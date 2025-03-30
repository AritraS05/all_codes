class Demo{
    static double arr[] = new double[10];

    static class thread1 extends Thread{
            public void run(){
                    try{
                            int fact = 1;
                            for(int i = 1; i<=10; i++){
                                    int temp = fact*i;
                                    fact*=i;
                                    arr[i-1] = temp;
                            }
                    }
                    catch(Exception e){
                            System.out.println(e);;
                    }
            }
    }
    static double sum = 1;
    static class thread2 extends Thread{
            public void run(){
                    try{
                            for(int i = 1; i<=10; i++){
                                    sum += (1.0/arr[i-1]);
                            }
                    }
                    catch(Exception e){
                            System.out.println(e);
                    }
            }
    }

    public static void main(String args[]){
            thread1 t1 = new thread1();
            thread2 t2 = new thread2();
            t1.start();
            try{
                    t1.join();
            }
            catch(Exception e){
                    System.out.println(e);
            }

            t2.start();
            try{
                    t2.join();
            }
            catch(Exception e){
                    System.out.println(e);
            }
            System.out.println("the sum of the series is:" + sum);
    }
}
