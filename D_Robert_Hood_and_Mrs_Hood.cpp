#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d,k;
        cin>>n>>d>>k;
        vector<pair<int,int>>res;
        for(int i = 0; i<n; i++){
            int a,b;
            cin>>a>>b;
            res.push_back({a,b});
        }
        int mini = 0, maxi = 0, bb = 1, bm = 1;
        for(int i =0; i<n-d; i++){
            int o = 0;
            int s = i;
            for(auto r : res){
                if(max(r.first,s)<= min(r.second,s+d-1)){
                    o++;
                }
            }
            if(o>maxi){
                maxi = o;
                bb = i;
            }
            if(o<mini){
                mini = o;
                bm = i;
            }
        }
        cout<<bb<<" "<<bm<<endl;
    }
    return 0;
}