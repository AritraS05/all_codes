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

        int res = floor(log2(n));
        cout<<2*res + 3<<endl;
    }
    
    return 0;
}