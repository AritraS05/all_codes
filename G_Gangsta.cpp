#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>res(n+1);
        for(int i = 1; i<=n; i++){
            res[i] = res[i-1];
            if(s[i-1] == '0'){
                res[i]++;
            }   
            else{
                res[i]--;
            }
        }
        sort(res.begin(), res.end());
        int ps = 0;
        int sum = 0;
        for(int i = 0; i<=n; i++){
            sum += res[i]*i - ps;
            ps += res[i];
        }
        cout<<((n*(n+1)*(n+2)/6)+sum)/2<<endl;
    }
    
    return 0;
}