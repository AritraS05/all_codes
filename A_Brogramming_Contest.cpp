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
        string s;
        cin>>s;
        int one=0,zero = 0;
        bool flag = false;
        int total1 = 0;
        int total0 = 0;
        vector<int>idx;

        for(int i = 0; i<n; i++){
            if(s[i] == '1'){
                idx.push_back(i);
            }
            if(s[i] == '0'){
                total0++;
            }
            if(s[i] == '1'){
                total1++;
                flag = true;
                one++;
            }
            if(s[i] == '0' && flag==true){
                zero++;
            }
        }
        
        if(total0 == n){
            cout<<0<<endl;
        }
        else if(total1 == n){
            cout<<1<<endl;
        }
        else if(total0 == n-1 && s[n-1] == '1'){
            cout<<1<<endl;
        }
        else{
            int res = (s[0] == '1')?1:0;
            for(int i = 0; i<n-1; i++){
                if(s[i] != s[i+1]){
                    res++;
                }
            }
            cout<<res<<endl;
        }
    }
    
    return 0;
}