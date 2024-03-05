#include <iostream>
using namespace std;
class Creature {
public:
    void identify() {
        cout << "I am a Creature." << endl;
    }
};
class FlyingCreature : virtual public Creature {
public:
    void fly() {
        cout << "I can fly!" << endl;
    }
};

class RunningCreature : virtual public Creature {
public:
    void run() {
        cout << "I can run!" << endl;
    }
};
class FlyingMammal : public FlyingCreature, public RunningCreature {
public:
    void greet() {
        cout << "I am a Flying Mammal." << endl;
    }
};
int main() {
    FlyingMammal bat;
    bat.greet(); 
   bat.identify(); 
    bat.run();
    bat.fly();
    return 0;
}
