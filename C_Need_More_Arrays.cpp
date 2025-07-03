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
        vector<int> a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        int count = 1;
        int prev = a[0];
        for(int i = 1; i<n; i++){
            if(a[i] - 1 <= prev){
                continue;
            }
            else{
                prev = a[i];
                count++;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}