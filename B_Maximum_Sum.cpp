#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i = 0; i<n ;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<int>ps(n+1,0);
        for(int i = 0; i<n; i++){
            ps[i+1] = ps[i] + a[i];
        }
        // int p1 = 0, p2 = n-1;
        // while(k--){
        //     if((a[p1]+a[p1+1]) > a[p2]){
        //         p2--;
        //     }
        //     else{
        //         p1+=2;
        //     }
        // }
        int sum = 0;
        for(int i = 0; i<=k; i++){
            sum  = max(sum,ps[n-k+i]-ps[2*i]);
        }
        // for(int i = p1; i<=p2; i++){
        //     sum += a[i];
        // }
        cout<<sum<<endl;
    }
    
    return 0;
}