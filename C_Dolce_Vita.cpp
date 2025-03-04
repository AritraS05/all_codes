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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        bool flag = true;
        int count = 0;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += a[i];
        }
        int prev = -1;
        for(int i = n-1; i>=0; i--){
            int curr;
            if(x-sum >= 0){
                curr = (x-sum)/(i+1);
            }
            else{
                curr = -1;
            }
            count += (i+1)*(curr-prev);
            prev = curr;
            sum -= a[i];
        }
        cout<<count<<endl;
    }
    
    return 0;
}