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
        vector<int>a(n);
        for(int i = 0; i<n;i++){
            cin>>a[i];
        }

        int res = a[0];
        for(int  i = 0; i<n; i++){
            res = __gcd(res, a[i]);
        }
        if(res == 1){
            cout<<0<<endl;
        }
        else{
            if(__gcd(res,n) == 1){
                cout<<1<<endl;
            }
            else if(__gcd(res,n-1) == 1){
                cout<<2<<endl;
            }
            else{
                cout<<3<<endl;
            }
        }
    }
    
    return 0;
}