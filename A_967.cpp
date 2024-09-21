#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        map<int,int>f;
        for(int i = 0; i<n; i++){
            f[a[i]]++;
        }
        int maxi = -1;
        for(auto it : f){
            if(it.second > maxi){
                maxi = it.second;
            }
        }
        bool flag = true;
        int sum = 0;
        for(auto it : f){
            if(it.second == maxi && flag == true){
                flag = false;
                continue;
            }
            sum += it.second;
        }

        cout<<sum<<endl;
    }
    return 0;
}