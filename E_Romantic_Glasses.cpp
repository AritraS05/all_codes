#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            pb                push_back
#define          sz(a)               (int)a.size()
int main(){
     int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }

        ll sum = 0;
        map<ll,ll> f;
        f[0] = 1;
        bool flag = false;
        for(int i =0; i<n; i++){
            a[i] *= ((i%2) ? -1 : 1);
            sum += a[i];
            if(f[sum]){
                cout<<"YES"<<endl;
                flag = true;
                break;
            }
            f[sum]++;
        }
        if(flag == false){
        cout<<"NO"<<endl;
        }
    }
    return 0;
}