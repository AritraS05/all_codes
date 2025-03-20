class Sum {
    int sum(int x,int y){
        return (x+y);
    }
    int sum(int x,int y,int z){
        return (x+y+z);
    }
    double sum(double x,double y){
        return (x+y);
    }
}

class Demo1{
    public static void main(String[] args) {
        Sum s = new Sum();
        System.out.println(s.sum(1,2));
        System.out.println(s.sum(1,2,3));
        System.out.println(s.sum(1.0,2.0));
    }
}
