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

void solve(){
  int T;cin>>T;
  for(int testcases =0;testcases<T;testcases++)
  {
    int n;cin>>n;
    string s;
    cin>>s;

    map<char,int> mp;
    for(auto ch:s) mp[ch]++;
    pair<char,int> maxi = {s[0],0};
    pair<char,int> mini = {s[0],1e8};
    for(auto t:mp ){
      //cout<<a<<b<<endl;
      if( maxi.second < t.second){
        maxi = {t.first,t.second};
      }
      if( mini.second >= t.second){
        mini = {t.first,t.second};
      }
    }
    //cout<<"log"<<maxi.first<<maxi.second<<mini.first<<mini.second<<endl;
    //cout<<s.find(mini.first)<<endl;
    //string s2 = s;
    s[s.find(mini.first)] = maxi.first;
    cout<<s<<endl;
  }
}

int main(){
  fastio;
  solve();
  return 0;
}