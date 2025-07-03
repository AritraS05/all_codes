#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 

int steps(int len){
    if(len == 1){
        return 0;
    }
    int res = 1 + steps((len/2) + ((len%2)>0 ? 1: 0));
    return res;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        int ans1 = steps(a) + steps(m);
        int ans2 = steps(n-a+1) + steps(m);
        int ans3 = steps(n) + steps(b);
        int ans4 = steps(n) + steps(m-b+1);
        int res = 1+ min(ans1,min(ans2,min(ans3,ans4)));
        cout<<res<<endl;
    }
    
    return 0;
}