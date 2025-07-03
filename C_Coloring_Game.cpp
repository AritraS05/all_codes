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
        for(int i = 0; i< n; i++){
            cin>>a[i];
        }   
        int res = 0;
        for(int i = 0; i<n; i++){
            int target;
            if(i < n-1){
                if(a[n-1] > 2*a[i]){
                    target = a[n-1]- a[i];
                }
                else{
                    target = a[i];
                }
            }
            else{
                if(a[n-2] > 2*a[i]){
                    target = a[n-2]- a[i];
                }
                else{
                    target = a[i];
                }
            }
            int p1 = 0;
            int p2 = i-1;
            while(p1<p2){
                if((a[p1] + a[p2]) <= target){
                    p1++;
                }
                else{
                    res += (p2 - p1);
                    p2--;
                }
            }
        }
        cout<<res<<endl;
    }
    
    return 0;
}