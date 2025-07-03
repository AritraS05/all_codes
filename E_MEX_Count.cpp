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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int>f;
        for(int i=0;i<n;i++){
            f[a[i]]++;
        }
        vector<int>res(n+1);
        for(int i = 0;i<=n;i++){
            res[f[i]]++;
            if(i == 0){
                if(f[0] == 0){
                    break;
                }
                continue;
            }
            else{
                if((f[i]+i) <= n){
                    res[n-i+1]--;
                    if(f[i] == 0){
                        break;
                    }
                }
            }
        }
        
        for(int i = 1; i<=n; i++){
            res[i] += res[i-1];
        }

        for(int i = 0; i<=n; i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}