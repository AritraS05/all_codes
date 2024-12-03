#include <iostream>
using namespace std;

class Base1 {
public:
    void display() {
        cout << "Base1 display()" << endl;
    }
};

class Base2 {
public:
    void display() {
        cout << "Base2 display()" << endl;
    }
};

class Child : public Base1, public Base2 {
public:
    void display() {
        Base2::display(); // Explicitly invoke Base2's display()
    }
};

int main() {
    Child obj;
    obj.display(); // Calls Base2's display()
    return 0;
}
