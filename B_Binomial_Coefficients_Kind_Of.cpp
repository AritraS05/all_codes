#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;
long long solve(long long x, long long p, long long mod) 
{
    long long res = 1;
    while (p > 0) {
        if (p % 2 == 1) {
            res = (long long)(res * x) % mod;
        }
        
        x = (long long)(x * x) % mod; 
        p /= 2;
    }
    return res;
}
int main() {
    long long t;
    cin >> t;
    vector<long long> n(t), k(t);
    for (long long i = 0; i < t; ++i) {
        cin >> n[i];
    }
    for (long long i = 0; i < t; ++i) {
        cin >> k[i];
    }
    for( long long i = 0 ; i < t ; i++){
        int res = solve(2,k[i],mod);
        cout<<res<<endl;
    }

    return 0;
}