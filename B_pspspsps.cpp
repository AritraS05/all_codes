#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        string s;
        cin>>s;
        int p1 = 0;
        int s1 = 0;
        if(s[0] == 's'){
            s[0] = '.';
        }
        if(s[m-1] == 'p'){
            s[m-1] = '.';
        }
        for(int i = 0; i<m; i++){
            if(s[i] == 's'){
                s1 = 1;
            }
            else if(s[i] == 'p'){
                p1 = 1;
            }
        }
        if(p1 && s1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}