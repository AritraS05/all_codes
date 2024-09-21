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
        double avg =0;
        for(int i = 0 ; i<n; i++){
            cin>>a[i];
            avg+=a[i];
        }
        avg /= n;
        sort(a.begin(),a.end());
        double comp = avg/2;
        int count = 0;
        int idx = 0;
        for(int i = 0; i<n;i++){
            if(a[i]<comp){
                count++;
            }
            else{
                idx = i;
                break;
            }
        }
        
        int res = (n/2)-count;
        int ans = 0;
        if(n==1 || n==2){
            ans = -1;
        }
        else{
            ans = (a[idx+res]-comp+1);
            ans *= n;
        }
        if(comp%(double)(2) != 0){
            ans += (comp%2)*n;
        }
        cout<<ans<<endl;
    }   
    return 0;
}