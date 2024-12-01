#include<bits/stdc++.h>
using namespace std;

template<typename T>
T square(T x){
    return x*x;
}

template<>
char square(char c){
    if(islower(c))
        return toupper(c);
    else
        return static_cast<int>(c);
}

int main() {
    cout << "Square of 5: " << square(5) << endl;        
    cout << "Square of 3.5: " << square(3.5) << endl;    

    char lower = 'a';
    char upper = 'A';
    char special = '!';
    
    cout << "Specialized square for 'a': " << square(lower) << endl; 
    cout << "Specialized square for 'A': " << square(upper) << endl; 
    cout << "Specialized square for '!': " << square(special) << endl; 
    return 0;
}

