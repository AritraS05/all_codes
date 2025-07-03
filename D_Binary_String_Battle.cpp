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
        string s;
        cin>>s;
        
        int one = 0;
        int zero = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '1'){
                one++;
            }
        }
        bool flag = false;
        for(int i = 0;i<n;i++){
            if(s[i] == '0'){
                zero++;
                if(zero >= k){
                    flag = true;
                    break;
                }
            }
            else{
                zero = 0;
            }
        }
        if(one > k){
            if(2*k  <= n){
                cout<<"Bob"<<endl;
                continue;
            }
        }
        else{
            cout<<"Alice"<<endl;
            continue;
        }
        if(flag){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
    
    return 0;
}