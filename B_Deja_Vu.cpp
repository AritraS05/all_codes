#include<iostream>
#include<bits/stdc++.h>
#define int long 
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        vector<bool>flag(31,false);
        int mini = 31;
        vector<int>x(q);
        for(int i = 0; i<q; i++){
            cin>>x[i];
            if(x[i] < mini){
                mini = x[i];
                flag[x[i]] = true;
            }
        }
        vector<int>add(31,0);
        for(int i = 1; i<=30; i++){
            add[i] = add[i-1];
            if(flag[i]){
                add[i] += (1LL<<(i-1));
            }
        }
        for(int i = 0; i<n; i++){
            int powr = 0;
            int temp = a[i];
            while(temp%2 == 0){
                powr++;
                temp/= 2;
            }
            a[i] += add[powr];
        }
        for(int i = 0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}