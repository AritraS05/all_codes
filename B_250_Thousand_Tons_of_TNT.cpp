#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }

        int res = -1;
        for(int i = 1; i<=n ; i++){
            if(n%i == 0){
                int maxi = -1e18;
                int mini =1e18;

                for(int j = 0; j<n; j+=i){
                    int sum = 0;

                    for(int k = j; k<i+j; k++){
                        sum += a[k];
                    }
                    maxi = max(maxi,sum);
                    mini = min(mini,sum);
                }
                res = max(res,maxi-mini);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}