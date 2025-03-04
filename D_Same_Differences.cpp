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
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        int count = 0;
        for(int i = 0; i<n; i++){
            a[i] -= i;
        }
        map<int,int>f;
        for(int i = 0; i<n; i++){
            if(f[a[i]]){
                count += f[a[i]];
            }
            f[a[i]]++;
        }
        cout<<count<<endl;
    }
    
    return 0;
}