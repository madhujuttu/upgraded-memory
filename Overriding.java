class Parent {
    void print() {
        System.out.println("i'm the parent");
    }

}

class Child1 extends Parent 
{
    void print() {
        System.out.println("i'm the child");
    }
}

public class Overriding
{
    public static void main(String[] args) {
        Child1 child = new Child1();
        child.print();
    }

}
