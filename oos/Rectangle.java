
class Rectangle{
    int length,breadth;
    Rectangle(int l,int b){
        length = l;
        breadth = b;
    }
    int cal_area(){
        return length*breadth;
    }
    int cal_perimeter(){
        return 2*(length+breadth);
    }
    public static void main(String args[]){
        Rectangle ob1 = new Rectangle(10,15);
        System.out.println(ob1.cal_area());
        System.out.println(ob1.cal_perimeter());
    }
}
