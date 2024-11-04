#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<vector<int>>a(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int res = 0;
        for(int i = 1; i<n; i++){
            int x = i, y = 0;
            int mini = 0;
            while(x<n && y<n){
                    mini = min(mini,a[x][y]);
                    x++;y++;
            }
            if(mini <0){
                res += abs(mini);
            }
        }
        for(int i = 0; i<n; i++){
            int x = 0, y = i;
            int mini = 0;
            while(x<n && y<n){
                    mini = min(mini,a[x][y]);
                    x++;y++;
            }
            if(mini <0){
                res += abs(mini);
            }
        }
        
        cout<<res<<endl;
    }
    return 0;
}