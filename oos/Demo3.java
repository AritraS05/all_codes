class Sample {
    int a = 2;
    static int s = 5;
    int cal_sum(){
        return a+s;
    }
}

class Demo3{
    public static void main(String[] args) {
        Sample ob = new Sample();
        System.out.println(ob.cal_sum());
        System.out.println("a = " + ob.a);
        // System.out.println("a = " + Sample.a);
        System.out.println("s = " + Sample.s);
        System.out.println("s = " + ob.s);
        new Sample().cal_sum();

    }
}
