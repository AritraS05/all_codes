#include<bits/stdc++.h>
using namespace std;
 
// #define int ll
// using ll = long long;
// using pii = pair<int, int>;
 
int32_t main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long res = 0;
        for(int  i = 0; i<60; i++){
            if(n & (1LL<<i)){
                res += (1LL<<(i+1))-1;
            }
        }
        cout<<res<<endl;
    }
    
    return 0;
}