#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 //this 
bool gconstr(int i,int j,vector<string>&g){
    bool flag = false;
    if(g[i][j] == '1'){
        if(i < j){
            flag = true;
        }
    }
    else{
        if(i > j){
            flag = true;
        }
    }
    return flag;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>g(n);
        for(int i = 0; i<n; i++){
            cin>>g[i];
        }
        vector<int>res(n);
        for(int i = 0; i<n; i++){
            res[i] = i;
        }
        sort(res.begin(),res.end(),[&](int i,int j){
            return gconstr(i,j,g);
        });

        for(int i = 0; i<n; i++){
            cout<<res[i]+1<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}