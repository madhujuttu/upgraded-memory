import java.util.Scanner;
class Vehicle {
    Scanner x = new Scanner(System.in);
    private
    int year;
    String brand;
    public
    void set_p(){
        System.out.print("brand name : ");
        brand=x.nextLine();
        System.out.print("manufacturing year : ");
        year=x.nextInt();
    }
    void displayP(){
        System.out.println("vehicle details");
        System.out.println("brand name of vehicle is : "+brand);
        System.out.println("manufacturing year : "+year);
    }
}

class bus extends Vehicle{
    private
    int seat;
    public
    void set_c(){
        set_p();
        System.out.print("no of seats : ");
        seat=x.nextInt();
    }
    void displayC(){
        displayP();
        System.out.println("no of seats : "+seat);
    }
}

public class SimpleInherit{
    public static void main(String[] args) {
        bus bus1 = new bus();
        bus1.set_c();
        bus1.displayC();
    }
}
