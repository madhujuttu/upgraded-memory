#include<iostream>
using namespace std;
class vehicle{
    string brand;
    int year;
    public:
    void setp(){
        cout<<"enter the brand name of bus : "<<endl;
        cin>>brand;
        cout<<"manufacturing year : "<<endl;
        cin>>year;
    }
    void display1(){
        cout<<"vehicle details"<<endl;
        cout<<"brand : "<<brand<<endl;
        cout<<"year : "<<year<<endl;
    }
};
class bus: public vehicle{
    int price;
    public:
    void setc(){
        setp();
        cout<<"enter the price : "<<endl;
        cin>>price;
    }
    void display(){
        display1();
        cout<<"the price is : "<<price<<endl;
    }
};
int main(){
    bus b1;
    b1.setc();
    b1.display(); 
}

