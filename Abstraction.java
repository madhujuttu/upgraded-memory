import java.util.Scanner;
class AccessSpecifier{
   private int priVar;
   protected int proVar;
   public int pubVar;
   public void setVar(int priValue,int proValue, int pubValue)
   {
       proVar = proValue;
       priVar = priValue;
       pubVar = pubValue;
   }
   public void getVar()
   {
       System.out.println("PRIVATE VARIABLE : " + priVar );
       System.out.println("PUBLIC VARIABLE : " + pubVar );
       System.out.println("PROTECTED VARIABLE : " + proVar );
   }
};
public class Abstraction
{
   public static void main(String[] args) 
     {
       Scanner input = new Scanner(System.in);
       AccessSpecifier obj = new AccessSpecifier();
       int p,q,r;
       System.out.print("enter PRIVATE variable :");
       p = input.nextInt();
       System.out.print("enter  PUBLIC variable :");
       q = input.nextInt();
       System.out.print("enter  PROTECTED  variable :");
       r = input.nextInt();
       obj.setVar(p,q,r);
       obj.getVar();
       input.close();
   }
}
