#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
const int MOD = 998244353;
int mod_exp(int base, int exp, int mod) {
    int result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;     
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p(n);
        for(int i = 0; i<n; i++){
            cin>>p[i];
        }
        vector<int>q(n);
        for(int i = 0; i<n; i++){
            cin>>q[i];
        }
        int maxp = 0;
        int maxq = 0;
        for(int i = 0; i<n; i++){
            if(p[i] > p[maxp]){
                maxp = i;
            }
            if(q[i] > q[maxq]){
                maxq = i;
            }

            if(p[maxp] != q[maxq]){
                if(p[maxp] > q[maxq]){
                        cout<<(long long)(mod_exp(2,p[maxp],MOD) + mod_exp(2,q[i-maxp],MOD))%MOD<<" ";
                }
                else{
                        cout<<(long long)(mod_exp(2,q[maxq],MOD) + mod_exp(2,p[i-maxq],MOD) )%MOD<<" ";
                }   
            }
            else{
                int maxi = max(p[i-maxq], q[i-maxp]);
                cout<<(long long)(mod_exp(2,p[maxp],MOD) + mod_exp(2,maxi,MOD))%MOD<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}