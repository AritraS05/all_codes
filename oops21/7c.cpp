#include<bits/stdc++.h>
using namespace std;

class Student{
protected:
    int id;
public:
    Student(int id){
        this->id = id;
    }
    void display(){
        cout<<"Student:"<<id<<endl;
    }
};

class Grad_Student:virtual public Student{
protected:
    int id;
public:
    Grad_Student(int id):Student(id){}
    void display(){
        Student::display();
        cout<<"Grad Student"<<id<<endl;
    }
};

class Masters_Student:virtual public Student{
protected:
    int id;
public:
    Masters_Student(int id):Student(id){}
    void display(){
        Student::display();
        cout<<"Masters Student"<<id<<endl;
    }
};

class employee:public Grad_Student, public Masters_Student{
protected:
    int id;
public:
    employee(int id):Student(id),Grad_Student(id),Masters_Student(id){}

    void display(){
        Student::display();
        Grad_Student::display();
        Masters_Student::display();
        cout<<"job id:"<<id<<endl;
    }
};

int main(){
    employee e(1);
    e.display();
    return 0;
}