#include<iostream>
using namespace std;
class AccessSpecifier
{
   private :
                int priVar;
   protected :
                int proVar;
   public :
                int pubVar;
   public :
       void setVar(int priValue,int proValue, int pubValue)
       {
           priVar = priValue;
           proVar = proValue;
           pubVar = pubValue;
       }
 void getVar(){
           cout << "PRIVATE VARIABLE : " << priVar << endl;
           cout << "PROTECTED VARIABLE : " << proVar << endl;
           cout << "PUBLIC VARIABLE : " << pubVar << endl;
       }

};
int main()
{
   AccessSpecifier A;
   float p,q,r;
   cout << "enter PRIVATE variable : "<<endl;
   cin >> p;
   cout << "enter PROTECTED variable : "<<endl;
   cin >> q;
   cout << "enter  PUBLIC variable : "<<endl;
   cin >> r;
   A.setVar(p,q,r);
   A.getVar();

}
