#include<iostream>
using namespace std;
class parent {
public:
    int publicVar = 230;
private:
    int privateVar = 176;
protected:
    int protectedVar = 45;
public:
    void display() {
        cout << "Public variable: " << publicVar << endl;
        cout << "Private variable: " << privateVar << endl;
        cout << "Protected variable: " << protectedVar << endl;
    }
    int getPrivateVar() {
        return privateVar;
    }
};
class child: public parent {
public:
    int privateVarInChild = getPrivateVar();
    int protectedVarInChild = protectedVar;
};
class child1: private parent {
public:
    int publicVarInChild = publicVar;
    int privateVarInChild = getPrivateVar();
    int protectedVarInChild = protectedVar;
};
class child2: protected parent {
public:
    int publicVarInChild = publicVar;
    int privateVarInChild = getPrivateVar();
    int protectedVarInChild = protectedVar;
};

// Main function
int main() {
    parent objParent;
    child objChild;
    
    cout << "Public simple inheritance" << endl;
    cout << "Public variable in child: " << objChild.publicVar << endl;
    cout << "Private variable in child: " << objChild.privateVarInChild << endl;
    cout << "Protected variable in child: " << objChild.protectedVarInChild << endl << endl;

    child1 objChild1;
    cout << "Private simple inheritance" << endl;
    cout << "Public variable in child: " << objChild1.publicVarInChild << endl;
    cout << "Private variable in child: " << objChild1.privateVarInChild << endl;
    cout << "Protected variable in child: " << objChild1.protectedVarInChild << endl << endl;

    child2 objChild2;
    cout << "Protected simple inheritance" << endl;
    cout << "Public variable in child: " << objChild2.publicVarInChild << endl;
    cout << "Private variable in child: " << objChild2.privateVarInChild << endl;
    cout << "Protected variable in child: " << objChild2.protectedVarInChild << endl << endl;

    return 0;
}
