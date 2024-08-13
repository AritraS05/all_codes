#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n+2);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int m;
        cin>>m;
        vector<string>b(m);
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        
        for(int i = 1; i<=m; i++){
            map<int,int>f;
            int pos[37];
            int valid[37];
            string temp = b[i];
            for(int i = 0; i<=26; i++){
                pos[i] = 0;
            }
            if(temp.length() != n){
                cout<<"NO"<<endl;
                continue;
            }
            bool flag = true;
            for(int i = 0;i<n; i++){
                int res = temp[i] - 'a';
                if(pos[res] == 0){
                    if(f[a[i+1]]){
                        flag = false;
                    }
                    f[a[i+1]] = 1;
                    pos[res] = 1;
                    valid[res] = a[i+1];
                }

                if(valid[res] == a[i+1]){
                    if(flag == true){
                        flag = true;
                    }
                }
            }
            if(flag == false){
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
