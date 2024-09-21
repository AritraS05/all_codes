#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int query(int a,int b){
    int r;
    cin>>r;
    cout<<"? ";
    cout.flush();
    cout<<a;
    cout.flush();
    cout<<" ";
    cout.flush();
    cout<<b;
    cout.flush();
    cout<<endl;
    cout.flush();
    return r;
    cout.flush();
}
void recur(vector<int>&d,vector<pair<int,int>>&res,int a,int b){
    int temp = query(a,b);
    if(temp==a || temp == b){
        d[temp] = 1;
        d[b] = 1;
        res.push_back({a,b});
        cout.flush();
        return;
        cout.flush();
    }

    if(d[a]==1 && d[temp]==1){
        recur(d,res,temp,b);
        cout.flush();
    }
    else{
        recur(d,res,a,temp);
        cout.flush();
        recur(d,res,temp,b);
        cout.flush();

    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout.flush();
        if(n>2){
            vector<pair<int,int>>res;
            vector<int>d(n+1,0);
            for(int i = 1;i<n; i++){
                for(int j =1+1 ;i<n+1; j++){
                    if(d[j] == 1){
                        continue;
                    }
                    else{
                        recur(d,res,i,j);
                        cout.flush();
                    }
                }
            }
            cout.flush();
            cout<<"! ";
            cout.flush(); 
            for(const auto& r : res){
                cout.flush();
                cout<<r.first;
                cout.flush();
                cout<<" ";
                cout.flush();
                cout<<r.second;
                cout.flush();
                cout<<endl;
                cout.flush();
            }
            cout<<endl;
            cout.flush();
        }
        else{
            cout.flush();
            cout<<"! 1 2";
            cout.flush();
            cout<<endl;
            cout.flush();
        }
    }
    return 0;
}