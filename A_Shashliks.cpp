#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;
        int count = 0;
        bool flag = 0;
        if(k>x || k>y){
            if(x<y){
                while(k>=a){
                    count++;
                    k--;
                }
                flag = 1;
            }
            else{
                while(k>=b){
                    count++;
                    k--;
                }
                flag = 2;
            }
        }
        if(flag == 1){
            while(k>=b){
                count++;
                k--;
            }
        }
        else if(flag == 2){
            while(k>=a){
                count++;
                k--;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}