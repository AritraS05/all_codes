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
        int l = a[0], r = a[0];
        for(int i =1;i<n; i++){
            if(a[i] == l-1){
                l--;
            }
            else if(a[i] == r+1){
                r++;
            }
            else{
                flag = false;
            }
        }
        if(flag == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}