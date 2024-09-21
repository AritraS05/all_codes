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
        for(int i = 0; i<n;i++){
            cin>>a[i];
        }
        int count = 0;
        int res= 0;
        for(int i = 0; i<n; i++){
            if(a[i]>=k){
                count += a[i];
            }
            else if(a[i] == 0){
                if(count > 0){
                    res++;
                    count--;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}