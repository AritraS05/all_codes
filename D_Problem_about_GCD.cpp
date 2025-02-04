#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long l,r,g;
        cin>>l>>r>>g;
        if(l%g != 0){
            l += (g-(l%g));
        }
        r -= (r%g);
        bool flag = false;
        for(long long i = 0; i<=(r-l)/g; i++){
            for(long long j = 0; j<=i; i++){
                if(__gcd((r+(j-i)*g),l+j*g) == g){
                    cout<<l+(j*g)<<" "<<r+(j-i)*g<<endl;
                    flag = true;
                }
            }
        }
        if(flag == true){
            cout<<"-1 -1"<<endl;
        }
    }
    return 0;
}