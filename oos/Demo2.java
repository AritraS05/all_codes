class X{
    int i = 10;
}

class Demo2 {
        public static void fun(X obj){
            obj.i = 20;
            obj = null;
        }
    public static void main(String[] args) {
        X ob = new X();
        System.out.println("i = " + ob.i);
        fun(ob);
        System.out.println("i = " + ob.i);
    }
}
