class Parent {
    void print() {
        System.out.println("i am a Parent method");
    }
}

class Child extends Parent {
    void print() {

        System.out.println("i am a Child method");
    }
}

public class Overloadinheritance {
    public static void main(String[] args) {
        Child child1 = new Child();
        child1.print();
    }
}
