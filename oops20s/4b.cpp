#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base show()" << endl;
    }
};

class Child1 : public Base {
public:
    void show() override {
        Base::show();
        cout << "Child1 show()" << endl;
    }
};

class Child2 : public Base {
public:
    void show() override {
        Base::show();
        cout << "Child2 show()" << endl;
    }
};

int main() {
    Base* basePtr;

    Child1 obj1;
    Child2 obj2;

    basePtr = &obj1;
    basePtr->show(); // Invokes Child1's show()

    basePtr = &obj2;
    basePtr->show(); // Invokes Child2's show()

    return 0;
}
