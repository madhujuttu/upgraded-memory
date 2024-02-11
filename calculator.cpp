#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"1.addition\n2.substraction\n3.multiplication\n4.division\n";
    int choice;
    cin>>choice;
    cout<<"enter two numbers\n";
    float num1,num2;
    cin>>num1>>num2;
    switch(choice)
    {
        case 1:
                cout<<"addition of "<<num1<< " and " <<num2<<" is " <<num1+num2<<endl;
                break;
        case 2:
                cout<<"substraction of "<<num1<< " and " <<num2<<" is " <<num1-num2<<endl;
                break;
        case 3:
                cout<<"multiplication of "<<num1<< " and " <<num2<<" is " <<num1*num2<<endl;
                break;
        case 4:
                cout<<"division of "<<num1<< " and " <<num2<<"is " <<num1/num2<<endl;
                break;
        default : cout<<"enter right choice !!";
    }

}
