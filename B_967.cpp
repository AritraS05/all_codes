#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n %2 == 1){
            vector<int>a(n);
            int p1 = 0, p2 = n-1;
            for(int i=0;i<n;i++){
                if(i%2 == 1){
                    a[p1] = i+1;
                    p1++;
                }
                else{
                    a[p2] = i+1;
                    p2--;
                }
            }
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}