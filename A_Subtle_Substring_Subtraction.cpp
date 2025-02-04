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
        string s;
        cin>>s;
        int n = s.length();
        int scorea = 0;
        int scoreb = 0;
        if(n==1){
            cout<<"Bob "<<(int)s[0]-96<<endl;
        }
        else if(n%2 == 0){
            for(int i = 0; i<n; i++){
                scorea += ((int)s[i]-96);
            }
            cout<<"Alice "<<scorea<<endl;
        }   
        else{
            int first = (int)s[0]-96;
            int last = (int)s[n-1]-96;
            for(int i = 1; i<n-1; i++){
                scorea += ((int)s[i]-96);
            }
            if(first > last ){
                cout<<"Alice "<<first+scorea-last<<endl;
            }
            else{
                cout<<"Alice "<<last+scorea-first<<endl;
            }
        }
    }
    
    return 0;
}