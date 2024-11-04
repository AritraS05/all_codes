#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int res = 0;
        bool visit = false;
        vector<int>positions;
        bool flag = false;
        for(int i = 0; i<min(k-1,n-k); i++){
            int temp = k-i-1;
            if(temp<0){
                continue;
            }
            int flag = 0;
            if(temp%2 == 1){
                flag = 1;
            }
            if(flag > min(n-k-i, k-1-i)){
                continue;
            }
            if(k-flag-1<temp || n-k-flag< temp){
                continue;
            }

            vector<int>pos;

            int idx = 1;
            for(int j= 1; j<=temp-1; j++){
                pos.push_back(idx);
                idx++;
            }
            if(temp > 0){
                pos.push_back(temp);
                idx += (k-flag-temp);
            }
            pos.push_back(idx);
            idx += (2*flag + 1);
            for(int j = 1; j<= temp-1; j++){
                pos.push_back(idx);
                idx++;
            }
            if(temp > 0){
                pos.push_back(temp);
                idx  += n-k-flag-temp+1;
            }

            if(idx-1 == n){
                res = (2*temp)+1;
                positions = pos;
                visit = true;
                break;
            }
        }
        if(visit == true){
            cout<<res<<endl;
            for(int i = 0; i<positions.size(); i++){
                if(i<positions.size()-1){
                    cout<<positions[i]<<" ";
                }
                else{
                    cout<<positions[i]<<endl;
                }
                
            }
            continue;
        }
        if(((n-1)/2) == k-1){
                cout<<1<<endl;
                cout<<1<<endl;
                continue;
            }
        cout<<-1<<endl;
    }
    return 0;
}