import java.lang.System;
class Calculate{
    public int add(int a,int b){
        return a+b;
    }
    public int add(int a,int b,int c){
        return a+b+c;
    }
}
public class Overload{
    public static void main(String[] args) {
        Calculate obj = new Calculate();
        int a=5;
        int b=10;
        int c=15;
        System.out.println("addition of and b is " + obj.add(a,b));
        System.out.println("addition of a , b and c is"+ obj.add(a,b,c));
       }
   }
