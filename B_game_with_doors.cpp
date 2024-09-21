#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int L,R;
        cin>>L>>R;
        int ll = max(l,L);
        int rr = min(r,R);
        int res = 0;
        if(ll>rr){
            res = 1;
        }
        else{
            res += rr-ll;
            if(min(l,L)<ll){
                res++;
            }
            if(max(r,R)>rr){
                res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}