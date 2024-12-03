#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("a.txt");  // Open source file
    ofstream outFile("b.txt"); // Open destination file

    if (!inFile) {
        cerr << "Error: Could not open a.txt" << endl;
        return 1;
    }

    if (!outFile) {
        cerr << "Error: Could not open b.txt" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        outFile << line << endl;  // Copy each line from a.txt to b.txt
    }

    cout << "Contents of a.txt copied to b.txt successfully." << endl;

    inFile.close();
    outFile.close();

    return 0;
}
