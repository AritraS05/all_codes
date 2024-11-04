#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minimalDisturbance(vector<int>& a) {
    int n = a.size();

    int maxReduction = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] == a[i + 1]) {
            if (i > 0 && a[i - 1] == a[i]) {
                maxReduction = max(maxReduction, 2);
            } else {
                maxReduction = max(maxReduction, 1);
            }
        }
    }
    
    return maxReduction;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<minimalDisturbance(a)<<endl;
    }
    return 0;
}