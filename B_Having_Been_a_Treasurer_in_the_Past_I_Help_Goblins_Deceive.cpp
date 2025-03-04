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
        int under = 0, dash = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == '_'){
                under++;
            }
            else if(s[i] == '-'){
                dash++;
            }
        }
        if(dash <2){
            cout<<0<<endl;
        }
        else if(under == 0){
            cout<<0<<endl;
        }
        else{
            cout<<(dash*dash)/4*(under)<<endl;
        }
    }
    
    return 0;
}