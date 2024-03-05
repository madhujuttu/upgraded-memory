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
class classU extends classT{
    void Uclass(){
        System.out.println("I am from class U inherit from class T");
    }
}
class classV extends classS{
    void Vclass(){
        System.out.println("I am from class T inherit from class S");
    }
}
public class Inheritancetypes {
    public static void main(String[] args) {
        classT X = new classT();
        System.out.println("Simple inheritance");
        X.Sclass();
        X.Tclass();
        System.out.println("Multi-Level inheritance");
        classU Y = new classU();
        Y.Sclass();
        Y.Tclass();
        Y.Uclass();
        System.out.println("Hierarchial inheritance");
        classV M1 = new classV();
        classV M2 = new classV();
        M1.Sclass();
        M1.Vclass();
        M2.Sclass();
        M2.Vclass();
    }
}
