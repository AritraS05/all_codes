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
        int l = 0, r = 0, res = 0;
        for(int i = 0; i<n; i++){
            int count = 0;
            for(int j = i+1; j<n; j++){
                if(a[j] > a[i]){
                    count++;
                }
                else if(a[j] < a[i]){
                    count--;
                }
                if(count< res){
                    l = i;
                    r = j;
                }
                res = min(res,count);
            }
        }
        l++;
        r++;
        cout<<l<<" "<<r<<endl;
    }
    
    return 0;
}