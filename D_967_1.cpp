#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int>a(N);
vector<int>b(N);
vector<int>c(N);
vector<bool>d(N);
vector<int>res(N);
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mini = 1e9;
        for(int i=1;i<n+1;i++){
            cin>>a[i];
            b[i] = 0;
            c[i] = -1;
            d[i] = false;
        }
        for(int i = 1; i<n+1; i++){
            c[a[i]] = i;
            res[a[i]] = i;
        }
        for(int i = 1; i<n+1; i++){
            if(c[i] != -1){
                mini = min(mini,c[i]);
                b[c[i]]++;
            } 
        }
        vector<int>count;
        int z = count.size();
        for(int i = 1; i<n+1; i++){
            if(i != mini){
                if(z%2 == 1){
                    int m = 1e9;
                    int y = min(mini,n);
                    for(int j = i;j<mini+1; j++){
                        if(d[j] == false){
                            m = min(m,a[j]);
                        }
                    }
                    for(int j = i;j<mini+1; j++){
                        if(a[j] == m){
                            i = j+1;
                            break;
                        }
                    }
                    if(m == 1e9){
                        break;
                    }
                    count.push_back(m);
                    b[c[m]]--;
                    while(b[mini] == 0 &&  mini <= n){
                        mini++;
                    }
                }
                else{
                    int m = 0;
                    int y = min(mini,n);
                    for(int j = i;j<=min(mini,n))
                }
            }
        }
    }
    return 0;
}