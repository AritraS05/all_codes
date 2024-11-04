#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        for(long long i = 0; i<n; i++){
            cin>>a[i];
        }
        vector<long long>res;
        for(long long i = 0; i<n; i++){
            long long score = a[i];
            long long count = 0;
            vector<long long>temp;
            for(long long j = 0;j<n; j++){
                if(j!=i){
                    temp.push_back(a[j]);
                }
            }
            long long m = temp.size();
            sort(temp.begin(),temp.end());
            for(long long j = 0; j<m; j++){
                if(score >= temp[j]){
                    score += temp[j];
                    count++;
                }
                else{
                    break;
                }
            }
            res.push_back(count);
        }
        long long gg = res.size();
        for(long long i = 0; i<gg; i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}