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
        vector<int>p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int count  = 0;
        for(int i = 0; i<n; i++){
            if(p[i] == i+1){
                count++;
            }
        }
        cout<<(count/2)+(count%2)<<endl;
    }
    
    return 0;
}