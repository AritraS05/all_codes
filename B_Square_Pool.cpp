#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int count = 0;
        vector<pair<pair<int,int>,pair<int,int>>>res(n);
        for(int i = 0; i<n; i++){
            cin>>res[i].first.first>>res[i].first.second>>res[i].second.first>>res[i].second.second;
        }
        for(int i = 0; i<n; i++){
            if(res[i].first.first != res[i].first.second){
                if((res[i].second.first + res[i].second.second)%s == 0){
                    count++;
                }
            }
            else{
                if((res[i].second.first - res[i].second.second)%s == 0){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}