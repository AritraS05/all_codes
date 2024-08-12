#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>x(n);
        vector<ll>y(n);
        for(int i=0;i<n;i++){
            cin>>x[i]>>y[i];
        }
        ll xs,ys,xt,yt;
        cin>>xs>>ys>>xt>>yt;
        bool flag = true;
        for(int i = 1;i<=n;i++){
            ll r1 = 1ll*(x[i]-xt)*(x[i]-xt)+1ll*(y[i]-yt)*(y[i]-yt));
            ll r2 = 1ll*(xs-xt)*(xs-xt+1ll*(ys-yt)*(ys-yt));
            if(r1<=r2){
                flag = false;
                break;
            }
        }
        if(flag == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}