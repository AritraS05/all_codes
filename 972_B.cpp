#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin >>n>>m>> q;
        
        vector<int>b(m);
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        vector<int>a(q);
        for(int i=0;i<q;i++){
            cin>>a[i];
            int pos = a[i];
            int res = 1;
            if(pos<b[0]){
                res = b[0]-1;
            }
            else if(pos>b[m-1]){
                res = n-b[m-1];
            }
            else{
                vector<int>::iterator it1  = upper_bound(b.begin(),b.end(),pos);
                vector<int>::iterator it2 = it1;
                it2--;
                int mid = (*it1 + *it2)/2;
                int res1 = abs(mid-*it1);
                int res2 = abs(*it2-mid);
                res = min(res1,res2);
            }
            cout<<res<<endl;
        }
        
    }
    return 0;
}