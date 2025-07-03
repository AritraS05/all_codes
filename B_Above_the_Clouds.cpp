#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>f;
        for(int i = 0; i<n; i++){
            f[s[i]]++;
        }
        bool flag = false;
        for(int i  = 1; i<=n-2; i++){
            if(f[s[i]] > 1){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}