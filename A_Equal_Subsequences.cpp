#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s = "";
        for(int i = 0; i<k; i++){
            s += '1';
        }
        for(int i = 0; i<n-k; i++){
            s += '0';
        }
        cout<<s<<endl;
    }
    
    return 0;
}