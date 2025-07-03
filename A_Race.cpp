#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,x,y;
        cin>>a>>x>>y;
        bool flag = true;
        for(int i = 1; i<= 100; i++){
            if(i!= a){
                if(abs(i-x) < abs(a-x) && abs(i-y) < abs(a-y)){
                    cout<<"YES"<<endl;
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
    }   
    
    return 0;
}