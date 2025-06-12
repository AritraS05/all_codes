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
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        vector<int>distinct(n);
        vector<int>f(n+1);
        for(int i = 0; i<n; i++){
            f[a[i]]++;
            if(f[a[i]] == 1){
                distinct[i] = 1; 
            }
            distinct[i] += (i ? distinct[i-1] : 0);
        }

        fill(f.begin(), f.end(), 0);

        int l = n-1;
        int res = 0;
        int total = 0;
        for(int i = n-1 ; i>= 0; i--){
            f[a[i]]++;
            if(f[a[i]] == 1){
                total++;
            }
            if(total == distinct[l]){
                res++;
                for(int j = i; j<=l; j++){
                    f[a[j]] = 0;
                }
                l = i - 1;
                total = 0;
            }
        }
        cout<<res<<endl;
    }
    
    return 0;
}