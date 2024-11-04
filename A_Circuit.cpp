#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(2*n);
        for(int i = 0; i<2*n; i++){
            cin>>a[i];
        }
        int one = 0, zero = 0;
        for(int i = 0; i<2*n; i++){
            if(a[i] == 1){
                one++;
            }
            else{
                zero++;
            }
        }
        if(zero == 2*n){
            cout<<0<<" "<<0<<endl;
        }
        else if(one == 2*n){
            cout<<0<<" "<<0<<endl;
        }
        else{
            int maxi = min(one,zero);
            int mini = one%2;
            cout<<mini<<" "<<maxi<<endl;
        }
    }
    return 0;
}