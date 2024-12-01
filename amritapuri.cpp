#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long
#define ld long double
#define imin INT_MIN
#define imax INT_MAX
#define endl '\n' //to get all the inputs first and then ouput
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
const ll MOD = 1000000007;
#define int ll

void solve(){
int T;cin>>T;
  for(int testcases =0;testcases<T;testcases++)
  {
    int n, k;cin>>n>>k;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<ll> res;
    for(int i=1;i<=n;i++){
      ll cost = 0;
      if( i <= k){
        for(int j=0;j<i;j++){
          cost+=arr[j];
        }
      }
      else{
        for(int j=i-1;j>=0;j--){
          int temp = k;
          while(--temp){
            if(j<0) break;
            cost+=arr[j];
            j--;
          }
          if(j<0) break;
          cost+=arr[j];
          j--;
        }
      }
        res.push_back(cost);
    }
    for(int i=0;i<n;i++){
      cout<<res[i]<<" ";
    }
    cout<<endl;
  }
}

int32_t main(){
  fastio;
  solve();
  return 0;
}