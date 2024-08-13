#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n+1);
        for(long long i = 1; i<=n; i++){
            cin>>a[i];
        }
        vector<char>b(n+1);
        for(long long i = 1; i<=n; i++){
            cin>>b[i];
        }
        long long track = n, res = 0,sum = 0;
        vector<long long>sums(n+1);
        sums[0] = 0;
        for(long long i = 1; i<=n; i++){
            sums[i] = sums[i-1] + a[i];
        }
        for(long long i = 1; i<=n; i++){
            if(b[i] == 'L'){
                while((track > i) && (b[track] != 'R')){
                    track--;
                } 

                if(track > i){
                    res += sums[track]-sums[i-1];
                    track--;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}