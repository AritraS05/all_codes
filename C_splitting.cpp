#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        int res = 0;
        for(int i = 0;i<n-1;){
            int x= a[i];
            int y = a[i+1];
            int v = min(x-y,k);
            if(k>=v){
                y+=k;
                k-=v;
                res += abs(x-y);
            }
            else{
                break;
            }
            i+=2;
        }
        cout<<res<<endl;
    }
    return 0;
}