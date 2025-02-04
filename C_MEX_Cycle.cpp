#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        x -= 1;
        y -= 1;

        vector<int>res(n,0);

        for(int i = 0; i<n; i++){
            res[(x+i)%n] = i%2;
        }
        if(n%2 !=0){
            res[x] = 2;
        }
        else if((x-y)%2 == 0){
            res[x] = 2;
        }

        int  m = res.size();
        for(int i = 0; i<m; i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}