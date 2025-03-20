class Sample{
    int a,b;
    Sample(int a,int b){
        this.a = a;
        this.b = b;
    }
    static void display(Sample ob){
        System.out.println( "a = " + ob.a);
        System.out.println( "b = "  + ob.b);
    }
    void get(){
        display(this);
    }
    public static void main(String[] args) {
        Sample s1 = new Sample(1,2);
        Sample s2 = new Sample(3,4);
        s1.get();
        s2.get();
    }
}