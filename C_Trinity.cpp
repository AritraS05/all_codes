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
        long long res = n,p1 = 1, p2 = n;
        sort(a.begin(),a.end());
        while(p1<=p2){
            bool flag = false;
            if(((p1+p2)/2) == 1){
                res = min(n-1,res);
                p2 = ((p1+p2)/2)+1;
                continue;
            }
            for(long long i = 0; i+((p1+p2)/2)-1<n; i++){
                long long  temp = a[i] + a[i+1];
                if(temp>a[i-1 + ((p1+p2)/2)]){
                    flag = true;
                    break;
                }
            }

            if(flag == true){
                res = min(n-((p1+p2)/2),res);
                p1 = ((p1+p2)/2)+1;
            }
            else{
                p2 = ((p1+p2)/2)-1;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}