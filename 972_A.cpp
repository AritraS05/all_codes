#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string vowels = "aeiou";  
        string res = "";

        for (int i = 0; i < n; ++i) {
            res += vowels[i % 5]; 
        }
        sort(res.begin(), res.end());
        cout<<res<<endl;
    }
    return 0;
}