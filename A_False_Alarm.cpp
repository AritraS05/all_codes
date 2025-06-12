#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        vector<int>closed;
        for(int i = 0; i<n; i++){
            if(a[i] == 1){
                closed.push_back(i);
            }
        }
        int k = closed.size();
        int total = closed[k-1] - closed[0] + 1;

        if(x >= total){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}