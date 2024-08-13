#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<int>b(n+2);
         b[n+1] = 0;
        for(int i=1;i<=n+1;i++){
            b[i] = 0;
        }
       
        bool flag = true;
        for(int i = 1; i<=n; i++){
            b[a[i]] = 1;
            if(i>=2){
                if(b[a[i]-1] == 0 && b[a[i]+1] == 0){
                    flag == false;
                }
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