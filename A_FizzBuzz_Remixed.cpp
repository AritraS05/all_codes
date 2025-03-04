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
        int count = (n/15)*3;
        for(int i = 0; i<=(n%15) ;i++){
            if (i%3 == i%5){
                count++;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}