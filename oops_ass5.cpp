#include <iostream>
#include <vector>
using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

template <typename T>
class Stack {
private:
    vector<T> elements;

public:
    void push(const T& elem) {
        elements.push_back(elem);
    }

    void pop() {
        if (elements.empty()) {
            cout << "Stack is empty. Cannot pop." << endl;
        } else {
            elements.pop_back();
        }
    }

    bool isEmpty() const {
        return elements.empty();
    }

    void print() const {
        if (elements.empty()) {
            cout << "Stack is empty." << endl;
        } else {
            for (const T& elem : elements) {
                cout << elem << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    cout << "Integer Stack after pushes: ";
    intStack.print();

    intStack.pop();
    cout << "Integer Stack after one pop: ";
    intStack.print();

    Stack<Complex> complexStack;
    complexStack.push(Complex(1.0, 2.0));
    complexStack.push(Complex(3.0, 4.0));
    complexStack.push(Complex(5.0, 6.0));
    cout << "\nComplex Stack after pushes: ";
    complexStack.print();

    complexStack.pop();
    cout << "Complex Stack after one pop: ";
    complexStack.print();

    return 0;
}
