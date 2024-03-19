#include<iostream>
using namespace std;
class Parent{
    public:
    void print(){
        cout << "i'm the parent class" << endl;
    }  
};
class Child : public Parent{
    public:
    void print(){
        cout << "i'm the child class" << endl;
    }
};
int main(){  
    Child child1;
    child1.print();
}
