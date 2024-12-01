#include<bits/stdc++.h>
using namespace std;

int mult(int i, int j, int k=1){
    return i*j*k;
} // valid
int mult(int i, int j=2, int k){
    return i*j*k;
}//invalid
int mult(int i=3, int j, int k){
    return i*j*k;
}//invalid
int mult(int i=3, int j=2, int k){
    return i*j*k;
}//invalid
int mult(int i, int j=2, int k=1){
    return i*j*k;
}//valid
int mult(int i=3, int j, int k=1){
    return i*j*k;
}//invalid
int mult(int i=3, int j=2, int k=1){
    return i*j*k;
}//valid

int main(){
    cout<<mult(3,2,1)<<endl;
    cout<<mult(3,2)<<endl;
    cout<<mult(3)<<endl;
    cout<<mult()<<endl;
    return 0;
}