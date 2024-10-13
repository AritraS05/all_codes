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
        int max1 = a[0];
        int count1 = 0;
        for(int i = 0; i<n; i+=2){
            max1 = max(max1,a[i]);
            count1++;
        }
        int max2 = 0;
        int count2 = 0;
        if(n>1){
            max2 = a[1];
            count2 = 0;
            for(int i =1; i<n; i+=2){
                max2 = max(max2,a[i]);
                count2++;
            }
        }
        cout<<max(count1+max1, count2+max2)<<endl;
    }
    return 0;
}