#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r,res;
        cin>>l>>r;
        int num = r-l+1;
        if(l%2 == 1){
            num++;
        }
        res = (num/2);
        cout<<res/2<<endl;
    }
    return 0;
}