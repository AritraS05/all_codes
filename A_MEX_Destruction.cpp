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
        int count = 0;
        int total = 0;
        bool flag = true;
        for(int i = 0; i<n; i++){
            if(a[i] == 0){
                count++;
            }
        }
        vector<int>pos;
        for(int i = 0; i<n; i++){
            if(a[i] != 0){
                pos.push_back(i);
            }
        }
        for(int i = 0; i<pos.size()-1; i++){
            if(pos[i+1] - pos[i] != 1){
                flag = false;
            }
        }
        if(count == n){
            cout<<0<<endl;
        }
        else if(count == 0  || flag == true){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }

    return 0;
}