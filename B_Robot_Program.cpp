#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,k;
        cin>>n>>x>>k;
        string s;
        cin>>s;
        vector<int>ps(n+1,0);
        for(int i = 1; i<=n ; i++){
            ps[i] = ps[i-1];
            if(s[i-1] == 'L'){
                ps[i]--;
            }
            else{
                ps[i]++;
            }
        }
        int count = 0,time = 0;
        bool possible = true;
        for(int i = 1; i<=n; i++){
            if((ps[i]) == -(x)){
                if(i > k){
                    possible = false;
                }
                time = i;
                break;
            }
            if(i == n){
                possible = false;
            }
        }
        if(!possible){
            cout<<0<<endl;
            continue;
        }
        count = 1;
        int i = 1;
        bool flag = false;
        for( i = 1; i<=n; i++){
            if(ps[i] == 0){
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<<1<<endl;
            continue;
        }

        count += ((k-time)/i);
        cout<<count<<endl;
    }
    
    return 0;
}