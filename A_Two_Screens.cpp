#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int longestCommonSubstring(const string &s1, const string &s2) {
    int n = s1.length();
    int m = s2.length();
    
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    int maxLength = 0; 
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                maxLength = max(maxLength, dp[i][j]);
            } else {
                dp[i][j] = 0;
            }
        }
    }
    
    return maxLength;
}

int main(){
    int q;
    cin>>q;
    while(q--){
        string s; cin>>s;
        string t; cin>>t;

        int n = s.length();
        int m = t.length();

        int common = longestCommonSubstring(s,t);
        int res = n + m - common;
        cout<<res<<endl;
    }
    return 0;
}