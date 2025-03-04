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
        if(n%2 == 1){
            cout<<1<<endl;
            continue;
        }
        int i = 1;
        for(i =2 ;i<=n; i++){
            if(n%i != 0){
                break;
            }
        }
        cout<<i-1<<endl;
    }
    
    return 0;
}