#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(ceil(log2(x)) == floor(log2(x))){
            cout<<-1<<endl;
        }
        else if(ceil(log2(x+1)) == floor(log2(x+1))){
            cout<<-1<<endl;
        }
        else{
            int p = log2(x & -x);
            int q = log2((~x) & -(~x));
            int res = (1<<p)|(1<<q);
            cout<<res<<endl;
        }
    }
    
    return 0;
}