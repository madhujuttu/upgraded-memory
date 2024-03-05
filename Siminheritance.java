public class Siminheritance {
    private
    int pri=50;
    public
    int pub=60;
    protected
    int pro=35;

    public
    int getpri(){
        return pri;
    }
}
class subclass extends Siminheritance{
    int variable1=getpri();
}
class test{
    public static void main(String[] args) {
        subclass x = new subclass();
        System.out.println(x.pub);
        System.out.println(x.pro);
        System.out.println(x.variable1);
    }
}
