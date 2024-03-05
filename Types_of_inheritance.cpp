#include<iostream>
using namespace std;
//simple inheritance
class classA{
    public:
    void Aclass(){
        cout<<"i am form class A"<<endl;
    }
};
class classC : public classA{
    public:
    void Cclass(){
        cout<<"i am from class C inherit from A"<<endl;
    }
};
class classF : public classA{
    public:
    void Fcalss(){
        cout<<"i am from class F inherit from A";
    }
};
class classG : public classC, public classF{
    public:
    void Gclass(){
        cout<<"i am from class G inherit from F and C"<<endl;
    }
};
class classD : public classC{
    public:
    void Dclass(){
        cout<<"i am fom class D inherit from C"<<endl;
    }
};
class subclassA: public classA{
    public:
    void Asub(){
        cout<<"subclass of Class A"<<endl;
    }
};
class classB{
    public:
    void Bclass(){
        cout<<"i am from class B"<<endl;
    }
};
class subclassB1: public classB{
    public:
    void B1sub(){
        cout<<"subclass1 of Class B"<<endl;
    }
};
class subclassB2: public classB{
    public:
    void B2sub(){
        cout<<"subclass2 of Class B"<<endl;
    }
};
class classE : public classA, public classB{
    public:
    void Eclass(){
        cout<<"i am from class E"<<endl;
    }
};
int main(){
    cout<<"simple inheritance"<<endl;
    subclassA obj1;
    obj1.Asub();
    obj1.Aclass();
    cout<<"hierarchical inheritance"<<endl;
    subclassB1 obj2;
    subclassB2 obj3;
    obj2.B1sub();
    obj2.Bclass();
    obj3.B2sub();
    obj3.Bclass();
    cout<<"Multi-level inheritance"<<endl;
    classD obj4;
    obj4.Aclass();
    obj4.Cclass();
    obj4.Dclass();
    cout<<"multiple inheritance"<<endl;
    classE obj5;
    obj5.Eclass();
    obj5.Aclass();
    obj5.Eclass();
    cout<<"hybrid inheritance"<<endl;
    classG obj6;
    obj6.Gclass();
    obj6.Cclass();
    obj6.Fcalss();
    // obj6.Aclass(); //Error ambiguous
}
