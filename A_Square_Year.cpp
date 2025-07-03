#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = stoi(s);
        int sqrtn = sqrt(n);
        if(n == 0){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        if(sqrtn*sqrtn == n){
            cout<<sqrtn-1<<" "<<1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    
    return 0;
}