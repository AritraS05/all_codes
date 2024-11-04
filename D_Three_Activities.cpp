#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>maxi(vector<int>&a,int n){
    int maxi1 = -1,maxi2 = -1, maxi3 = -1;
    for(int i = 0; i<n; i++){
        if(maxi1 == -1 || a[i]>a[maxi1]){
            maxi3 = maxi2;
            maxi2 = maxi1;
            maxi1 = i;
        }
        else if(maxi2 == -1 || a[i]>a[maxi2]){
            maxi3 = maxi2;
            maxi2 = i;
        }
        else if(maxi3 == -1 || a[i]>a[maxi3]){
            maxi3 = i;
        }
    }
    return {maxi1,maxi2,maxi3};
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        vector<int>a1(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            a1[i]=a[i];
        }
        vector<int>b(n);
        vector<int>b1(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
            b1[i]=b[i];
        }
        vector<int>c(n);
        vector<int>c1(n);
        for(int i=0;i<n;i++){
            cin>>c[i];
            c1[i] = c[i];
        }
        vector<int>topa = maxi(a1,n);
        vector<int>topb = maxi(b1,n);
        vector<int>topc = maxi(c1,n);
        int res = 0;
        for(int aa : topa ){
            for(int bb : topb){
                for(int cc : topc){
                    if(aa!=bb && aa!=cc && bb!=cc){
                        res = max(res,a[aa]+b[bb]+c[cc]);
                    }
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}