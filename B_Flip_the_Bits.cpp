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
        string a,b;
        cin>>a>>b;
        vector<int>ps(n+1,0);
        for(int i = 0; i<n; i++){
            ps[i+1] = ps[i] + (a[i] == '1' ? 1: -1);
        }
        bool flag = false;
        bool res = true;
        for(int i = n-1; i>= 0; i--){
            if((a[i] != b[i]) ^ flag){
                if(ps[i+1]!=0){
                    res = false;
                }
                flag = !flag;
            }
        }
        if(res){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}