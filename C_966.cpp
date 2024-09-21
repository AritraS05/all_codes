#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int m;
        cin>>m;
        
        while(m--){
            string s;
            cin>>s;
            bool flag = true;
            map<int,char>m1;
            map<char,int>m2;
            if(s.length() != n){
                cout<<"NO"<<endl;
                continue;
            }
            for(int i = 0;i<n; i++){
                if(!m1.count(a[i])){
                    m1[a[i]] = s[i];
                }
                if(!m2.count(s[i])){
                    m2[s[i]] = a[i];
                }

                if(m1[a[i]]!=s[i] || m2[s[i]]!=a[i]){
                    flag = false;
                    break;
                }
            }
            if(flag == true){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
