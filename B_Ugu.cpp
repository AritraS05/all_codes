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
        int count = 0;
        for(int  i = 0; i<n-1; i++){
            if(s[i] != s[i+1]){
                count++;
            }
        }

        if(s[0] == '1'){
            cout<<count<<endl;
        }
        else{
            if(count > 0){
                cout<<count-1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
    
    return 0;
}