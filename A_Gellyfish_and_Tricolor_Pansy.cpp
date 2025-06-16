#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int jelly = min(a,c);
        int flower = min(b,d);
        if(jelly >= flower){
            cout<<"Gellyfish"<<endl;
        }
        else{
            cout<<"Flower"<<endl;
        }
    }
    
    return 0;
}