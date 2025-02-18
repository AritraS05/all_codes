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
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        map<int,int>f;
        vector<int>res;
        set<int>res1;
        for(int i = 0; i<n; i++){
            f[a[i]]++;
        }
        for(auto it: f){
            if(it.second ==1){
                res.push_back(it.first);
                res1.insert(it.first);
            }
        }
        int maxi = 0;
        int l = 0,r = 0;
        for(int i =0, j = 0; j<n; j++){
            bool flag = false;
            /*
            if(find(res.begin(),res.end(),a[j]) == res.end()){
                flag = true;
            }
                */
            if(res1.find(a[j]) != res1.end()){
                flag = true;
            }
            if(flag){
                if((j-i+1) > maxi){
                    maxi = j-i+1;
                    l = i;
                    r = j;
                }
                else{
                    continue;
                }
            }
            else{
                i = j+1;
            }
        }
        l++;
        r++;
        if(maxi > 0){
            cout<<l<<" "<<r<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    
    return 0;
}