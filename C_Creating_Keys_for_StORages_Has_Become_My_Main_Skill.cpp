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
        int pos = 0;
        for(int i = 0; i<=n; i++){
            pos = i;
            if(pos & (~x)){
                break;
            }
        }
        int res = min(n,pos);
        int k = 0;
        while(pow(2,k)<res){
            k++;
        }
        k = pow(2,k)-1;
        int upto  = 0;
        if(k != x){
            upto = min(pos,n-1);
        }
        else{
            upto = res;
        }
        vector<int>sol;
        for(int i = 0; i<upto; i++){
            sol.push_back(i);
        }
        if(k!= x){
            sol.push_back(x);
        }
        int gg = sol.size();
        gg = n - gg;
        for(int i = 0; i<gg; i++){
            sol.push_back(0);
        }
        for(int i = 0; i<sol.size(); i++){
            if(i == sol.size()-1){
                cout<<sol[i]<<endl;
            }
            else{
                cout<<sol[i]<<" ";
            }
        }
    }
    
    return 0;
}