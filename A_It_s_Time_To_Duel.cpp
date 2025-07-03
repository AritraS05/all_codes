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
        vector<int>a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        bool flag = false;
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += a[i];
            if(sum == n){
                flag = true;
                break;
            }
        }
        for(int i = 0; i<n-1; i++){
            if(a[i]==0 && a[i+1]== 0){
                flag = true;
                break;
            }
        }   
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}