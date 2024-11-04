#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,bool>visit;
        for(char ch = 'a'; ch<='z';ch++){
            visit[ch] = false;
        }
        int res = 0;
        for(int i = 0; i<n; i++){
            if(visit[(char)s[i]] == false){
                visit[(char)s[i]] = true;
                res += n-i;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}