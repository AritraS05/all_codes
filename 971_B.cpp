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
        for(int i = 0;i<n;i++){
            string temp;
            cin>>temp;
            if(temp[0]=='#'){
                a[i] = 1;
            }
            else if(temp[1]=='#'){
                a[i] = 2;
            }
            else if(temp[2]=='#'){
                a[i] = 3;
            }
            else{
                a[i] = 4;
            }
        }
        for(int i = n-1; i>=0; i--){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}