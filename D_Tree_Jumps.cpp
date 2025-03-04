#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
 const int MOD = 998244353;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p(n-1);
        for(int i = 0; i<n-1; i++){
            cin>>p[i];
        }
        vector<int>d(n);
        d[0] = 0;
        for(int i = 1; i<n; i++){
            d[i] = d[p[i]] + 1;
        }
        int m = 0;
        for(int i = 0; i<n; i++){
            m = max(m,d[i]);
        }
        vector<int>res(m,0);
        vector<int>separator(m+1,0);
        for(int i =1 ; i<n; i++){
            res[d[i]]++;
        }
        separator[m] = res[m]%MOD;

        for(int i = m-1; i>=0; i--){
            separator[i] = ((res[i]%MOD) +(((res[i]-1)%MOD + ((res[i]-1)%MOD <0)?MOD:0 )*separator[i+1])%MOD)%MOD;
        }
        cout<<(separator[0]+1)%MOD<<endl;
    }
    
    return 0;
}