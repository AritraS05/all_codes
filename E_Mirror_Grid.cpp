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
        vector<vector<int>>a(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                char c;
                cin>>c;
                a[i][j] = c-'0';
            }
        }
        int res = 0;
        for(int  i = 0; i<n ;i++){
            for(int j = 0; j<n ;j++){
                int sum = 0;
                if(a[i][j] == 1){
                    sum++;
                }
                if(a[j][n-i-1] == 1){
                    sum++;
                }
                if(a[n-i-1][n-j-1] == 1){
                    sum++;
                }
                if(a[n-j-1][i] == 1){
                    sum++;
                }
                res += min(sum,4-sum);
            }
        }
        cout<<res/4<<endl;
    }
    
    return 0;
}