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
        int total = 0;
        for(int i = 0; i<n; i++){
            cin>>a[i];
            total += a[i];
        }
        bool flag = true;
        while(flag == true){
            if(n == 1){
                total = max(total , a[0]);
                flag = false;
            }
            int sum = 0;
            vector<int>res(n-1);
            for(int i = 0; i<n-1; i++){
                sum += (a[i+1]-a[i]);
                res[i] = ((a[i+1]-a[i]));
            }
            if(sum < 0){
                sum = 0;
                for(int i = 0; i<n-1; i++){
                    sum += (a[i]-a[i+1]);
                    res[i] = (a[i]-a[i+1]);
                }
            }
            total = max(total , sum);
            int m = res.size();
            int start = 0;
            int end = m - 1;
            while (start < end) {
                int temp = res[start];
                res[start] = res[end];
                res[end] = temp;
                start++;
                end--;
            }
            a = res;
        }
        cout<<total<<endl;
    }
    return 0;
}