#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>x(n);
        for(int i = 0;i<n; i++){
            cin>>x[i];
        }
        bool flag = false;
        sort(x.begin(),x.end());
        if(n == 2){
            if(abs(x[0]-x[1]) > 1){
                flag = true;
            }
            else{
                flag = false;
            }
        }
        else{
            flag = false;
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