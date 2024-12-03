#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    int rollNumber;
    string name;
    float cgpa;


    // Function to take input
    void input() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter name: ";
        cin.ignore(); // To ignore newline from previous input
        getline(cin, name);
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    // Function to write data to file
    void writeToFile(ofstream &file) {
        file << rollNumber << " " << name << " " << cgpa << endl;
    }
};

int main() {
    Student students[2]; // Array of 2 students

    // Input data for students
    for (int i = 0; i < 2; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        students[i].input();
    }
    // Write data to file
    ofstream outFile("students.txt");
    if (!outFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    for (int i = 0; i < 2; i++) {
        outFile<<students[i].name<<" "<<students[i].rollNumber<<" "<<students[i].cgpa<<endl;
    }

    outFile.close();
    cout << "Student records written to 'students.txt' successfully." << endl;

    return 0;
}
