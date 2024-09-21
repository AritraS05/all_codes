#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int mini = 1e8;
        int res;
        for(int c = a;c<=b;c++){
            int temp = (c-a)+(b-c);
            if(temp<mini){
                mini = temp;
                res = mini;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}