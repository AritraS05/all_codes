#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,p;
        cin>>n>>k>>p;
        if(k == 0){
            cout<<0<<endl;
        }
        else if(k <=p  && k>0){
            cout<<1<<endl;
        }
        else{
            if(k> n*p){
                cout<<-1<<endl;
            }
            else if(-k > n*p){
                cout<<-1<<endl;
            }
            else{
                cout<<min(n,(abs(k)+p-1)/p)<<endl;
            }
        }
    }
    
    return 0;
}