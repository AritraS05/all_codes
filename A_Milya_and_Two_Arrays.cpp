#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            pb                push_back
#define          sz(a)               (int)a.size()
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i = 0; i<n ;i++){
            cin>>a[i];
        }
        vector<int>b(n);
        for(int i = 0; i<n; i++){
            cin>>b[i];
        }
        map<int,int>fa,fb;
        for(int i = 0; i<n; i++){
            fa[a[i]]++;
            fb[b[i]]++;
        }
        int distincta = 0,distinctb = 0;
        for(auto it:fa){
            if(it.second > 1){
                distincta++;
            }
        }
        for(auto it:fb){
            if(it.second > 1){
                distinctb++;
            }
        }
        if(distincta == 2 && distinctb == 2){
            cout<<"YES"<<endl;
        }
        else if(distincta < 2 && distinctb == 2){
            cout<<"NO"<<endl;
        }
        else if(distincta == 2 && distinctb < 2){
            cout<<"NO"<<endl;
        }
        else if(distincta >2 || distinctb > 2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}