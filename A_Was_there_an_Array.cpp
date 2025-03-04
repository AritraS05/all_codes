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
        vector<int>a(n-2);
        for(int i=0;i<n-2;i++){
            cin>>a[i];
        }
        int zero = 0;
        bool flag = true;
        bool zeroEncountered = false;
        for(int i= 0; i<n-2; i++){
            if(a[i] == 0){
                zero++;
                zeroEncountered = true;
            }
            else{
                if(i>1){
                    if((zero == 1) && zeroEncountered){
                        flag = false;
                        break;
                    }
                }
                zero = 0;
                zeroEncountered = false;
            }
        }
        if(!flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}