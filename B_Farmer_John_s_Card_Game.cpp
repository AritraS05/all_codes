#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            pb                push_back
#define          sz(a)               (int)a.size()
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>a(n,vector<int>(m));
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                cin>>a[i][j];
            }
        }
        for(int i = 0; i<n; i++){
            sort(all(a[i]));
        }
        vector<int>res(n,0);
        for(int i = 0; i<n; i++){
            for(int j = i; j<n; j++){
                bool flag = true;
                for(int k = 0; k<m; k++){
                    if(a[i][k] >= a[j][k]){
                        flag = false;
                        break;
                    }
                }
                if(flag == false){
                    res[j]++;
                }
            }
        }
        for(int i = 0; i<n; i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}