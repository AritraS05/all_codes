#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum = max(sum,a[i]);
        }
        for(int i = 0; i<m; i++){
            char c;
            int l,r;
            cin>>c>>l>>r;
            if(r>=sum){
                if(sum>=l){
                    if(c == '+'){
                        sum++;
                    }
                    else{
                        sum--;
                    }
                }
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}