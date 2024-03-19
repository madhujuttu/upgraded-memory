#include<iostream>
using namespace std;

class Calculate{
    public:
        float add(float a,float b){
            return a+b;
        }
        float add(float a,float b,float c){
            return a+b+c;
        }
};

 int main(){

    Calculate obj;
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c;
    cin>>c;

    cout << "addition of a and b "<< " = " << obj.add(a,b) << endl;
    cout << "addition of a , b and c " << " = " << obj.add(a,b,c) << endl;

 }
