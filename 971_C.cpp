#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int x1 = (x/k) + (x%k==0?0:1);
        int y1 = (y/k) + (y%k==0?0:1);
        int temp = min(x1,y1);
        int res ;
        if(y1>=x1){
            res = 2*y1;
        }
        else{
            res = 2*x1-1;
        }
        cout<<res<<endl;
    }
    return 0;
}