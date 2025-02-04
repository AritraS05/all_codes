#include<iostream>
#include<bits/stdc++.h>
using namespace std;
set<int>s;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int k = 2; k<=1000; k++){
            int sum = 1 + k;
            int temp = k*k;
            for(int j = 2; j<=20; j++){
                sum += temp;
                if(sum > 1e6){
                    break;
                }
                s.insert(sum);
                temp *= k;
            }
        }
        if(s.count(n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}