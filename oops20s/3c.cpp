#include <iostream>
using namespace std;

class Base {
protected:
    int x;

public:
    Base(int value) : x(value) {}

    // Pre-increment operator
    void operator++() {
        ++x;
    }

    // Post-decrement operator
    void operator--(int) {
        x--;
    }

    void show() const {
        cout << "x: " << x << endl;
    }
};

class Child : public Base {
public:
    Child(int value) : Base(value) {}
};

int main() {
    Child obj(10);

    ++obj;    // Pre-increment
    obj.show();

    obj--;    // Post-decrement
    obj.show();

    return 0;
}
