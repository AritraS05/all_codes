#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>c(26);
        for(int i=0;i<26;i++){
            cin>>c[i];
        }

        int sum = 0;
        for(int i=0;i<26;i++){
            sum += c[i];
        }

        vector<int>dp(sum+1);
        dp[0] = 1;

        for(int i = 0; i<26; i++){
            if(c[i]){
                for(int j = sum; j>=0; j--){
                    int total = j + c[i];
                    if(total <= sum){
                        dp[total] = (dp[total] + dp[j]) % 998244353;
                    }
                }
            }
        }

        int res = dp[sum/2];
        int res1 = 1;
        for(int i = 1; i<= sum/2; i++){
            res1 = (res1*i)%998244353;
        }
        res1 %= 998244353;
        int res2 = 1;
        for(int i = 1; i<= (sum+1)/2; i++){
            res2 = (res2*i)%998244353;
        }
        res2 %= 998244353;
        res *= res1;
        res*= res2;

        for(int i = 0; i<26; i++){
            int temp = 1;
            for(int i = 1; i<=c[i]; i++){
                temp = (temp*i)%998244353;
            }
            int ans = 1;
            int mod = 998244351;
            while(mod){
                if(mod%2 == 1){
                    ans = (ans*temp)%998244353;
                }
                mod>>=1;
                temp = (temp*temp)%998244353;
            }

            res = (res*ans)%998244353;
        }
        cout<<res/2<<endl;
    }
    
    return 0;
}