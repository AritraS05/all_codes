#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s;
        cin>>t;
        int n = s.length(),m = t.length();
        int p1 = 1, p2 = t.length()-2;
        int count = 0;
        string temp = "";
       map<char,int>pos;
       for(int i = 0; i<m-1; i++){
            pos[t[i]] = i+1;
       }
        int mini = 1e8;
        pair<int,int>res;
       for(int i = 1; i<n; i++){
           if(pos[s[i]]){
                int len = m -  pos[s[i]]+i+2;
                if(len < mini){
                    mini = len;
                    res = make_pair(i,pos[s[i]]-1);
                }
           }
       }
       if(mini == 1e8){
        cout<<-1<<endl;
       }
       else{
            string temp = s.substr(0,res.first) + t.substr(res.second,m-1);
            cout<<temp<<endl;
       }
    }
    return 0;
}