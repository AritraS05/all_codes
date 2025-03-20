
class Rectangle{
    int length,breadth;
    Rectangle(){
        this(5,6);
    }
    Rectangle(int l,int b){
        length = l;
        breadth = b;
    }
    Rectangle get(){
        int area = length*breadth;
        System.out.println("area = " +  area);
        return this;
    }

    void show(){
        System.out.println("length = " + length);
        System.out.println("breadth = " + breadth);
    }
}
class Demo {
    public static void main(String[] args) {
        Rectangle ob1 = new Rectangle();
        Rectangle ob2 = new Rectangle();
        ob1.get().show();
        ob2.get().show();
        new Rectangle(10,15).get().show();
    }
}
