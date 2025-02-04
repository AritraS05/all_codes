#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// bool isCoPrime(int a,int b){
//     return __gcd(a,b) == 1;
// }

// bool isminimalCoprime(int a,int b){
//     int count = 0;
//     for(int i = a; i<=b; i++){
//         for(int j = i;j<=b; j++){
//             if(isCoPrime(i,j)){
//                 count++;
//                 if(count > 1){
//                     return false;
//                 }
//             }
//         }
//     }
//     return true;
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
       if(l==1 && r== 1){
        cout<<1<<endl;
       }
       else{
        cout<<r-l<<endl;
       }
    }
    return 0;
}