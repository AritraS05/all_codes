#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool flag = true;
        for(int i = 1; i<n; i++){
            if(abs(a[i]-a[i-1])==5 || abs(a[i]-a[i-1])==7){
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
        cout<<(flag?"YES":"NO")<<endl;
    }
    return 0;
}