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
        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            a[i] = i;
        }
        vector<int>vis(n+1,0);
        vector<int>po(n+1,1);
        vis[1] = 1;
        for (int i = 2; i <= n; i++) {
            if (!vis[i]) {
                bool swapped = false;
                for (int k = n / i; k >= 2; --k) {
                    int pw = i * k;
                    if (!vis[pw]) {
                        swap(a[i], a[pw]);
                        vis[a[i]] = 1;
                        vis[pw] = 1;
                        swapped = true;
                        break;
                    }
                }
                if (!swapped) vis[a[i]] = 1;
            }
        }
        for(int i = 1; i<=n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}