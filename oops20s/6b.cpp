#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll;
    float cgpa;

public:
    // Default constructor
    Student() : name(""), roll(0), cgpa(0.0) {}

    // Parameterized constructor
    Student(string n, int r, float c) : name(n), roll(r), cgpa(c) {}

    // Method to initialize student details
    void initialize(const string& n, int r, float c) {
        name = n;
        roll = r;
        cgpa = c;
    }

    // Method to display student details
    void display() const {
        cout << "Name: " << name << ", Roll: " << roll << ", CGPA: " << cgpa << endl;
    }

    // Overloading the new operator
    void* operator new(size_t size) {
        cout << "Custom new operator called." << endl;
        void* ptr = malloc(size);
        if (!ptr) {
            throw bad_alloc();
        }
        return ptr;
    }

    // Overloading the new[] operator for arrays
    void* operator new[](size_t size) {
        cout << "Custom new[] operator called." << endl;
        void* ptr = malloc(size);
        if (!ptr) {
            throw bad_alloc();
        }
        return ptr;
    }

    // Overloading the delete operator
    void operator delete(void* ptr) {
        cout << "Custom delete operator called." << endl;
        free(ptr);
    }

    // Overloading the delete[] operator for arrays
    void operator delete[](void* ptr) {
        cout << "Custom delete[] operator called." << endl;
        free(ptr);
    }
};

int main() {
    // Allocate an array of 50 Student objects using the overloaded new[] operator
    Student* students = new Student[50];

    // Initialize and display data for a few students
    for (int i = 0; i < 3; ++i) {
        students[i].initialize("Student_" + to_string(i + 1), i + 1, 8.0 + i);
        students[i].display();
    }

    // Deallocate the array using the overloaded delete[] operator
    delete[] students;

    return 0;
}
