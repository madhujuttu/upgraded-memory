class classS{
    void Sclass(){
        System.out.println("I am from class S");
    }
}

class classT extends classS{
    void Tclass(){
        System.out.println("I am from class T inherit from class S");
    }
}

class classU extends classS{
    void Uclass(){
        System.out.println("I am from class U inherit from class S");
    }
}

public class Inheritance{
    public static void main(String[] args) {
        classT obj1 = new classT();
        classU obj2 = new classU();
        obj1.Sclass();
        obj1.Tclass();
        obj2.Sclass();
        obj2.Uclass();
    }
}
