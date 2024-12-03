#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Default constructor of A called" << endl;
    }
    A(int x) {
        cout << "Parameterized constructor of A called with value " << x << endl;
    }
};

class B :virtual public A {
public:
    B(int x) : A(x) {
        cout << "Parameterized constructor of B called" << endl;
    }
};

class C : virtual public A {
public:
    C(int x) : A(x) {
        cout << "Parameterized constructor of C called" << endl;
    }
};

class D : public B, public C {
public:
    D(int x, int y) : B(x), C(y) {
        cout << "Constructor of D called" << endl;
    }
};

int main() {
    D obj(5, 10);
    return 0;
}
