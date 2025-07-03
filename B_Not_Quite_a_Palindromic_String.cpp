#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int one = 0, zero = 0;
        int temp = n-2*k;
        temp /= 2;
        for(int i = 0; i<n; i++){
            if(s[i] == '1'){
                one++;
            }
            else{
                zero++;
            }
        }
        one -= temp;
        zero -= temp;

        if(one%2 ==0 && zero%2 ==0 && one >= 0 && zero >= 0){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    
    return 0;
}