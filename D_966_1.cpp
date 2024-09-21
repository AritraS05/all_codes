#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        string s;
        cin>>s;
        long long sum = 0;
        for(long long i = 0; i<n; i++){
            sum += a[i];
        }
        long long p1 = 0, p2 = n-1;
        long long res = 0;
        while(p1<p2){
            if(s[p1] == 'R'){
                sum -= a[p1];
                p1++;
            }
            else if(s[p2] == 'L'){
                sum -= a[p2];
                p2--;
            }
            else{
                res += sum;
                sum -= a[p1];
                p1++;
                sum -= a[p2];
                p2--;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}