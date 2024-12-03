#include<bits/stdc++.h>
using namespace std;

class Sample{
    int s;
    public:
        Sample(int x=0){
            s = x;
        }
        Sample operator+(Sample&ob){
            Sample temp;
            temp.s = s + ob.s;

            return temp;
        }

        Sample operator*(Sample&ob){
            Sample temp;
            temp.s = s*ob.s;
            return temp;
        }
        operator int() const{
            return s;
        }
        friend ostream&operator <<(ostream&out,Sample&ob){
            out<<ob.s;
            return out;
        }
};

int main() {
    Sample s1(10), s2(5), s3(0);
    s3 = s2 + s1;        // Add s1 and s2
    s1 = s1 * s2;        // Multiply s1 and s2
    int x = s1; // Get the value of s1
    int y = s2;// Get the value of s2
    Sample s4(x + y);    // Create a new Sample object with the sum of x and y
    cout << s4; // Output the value of s4
    return 0;
}