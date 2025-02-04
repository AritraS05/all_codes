#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool flag = true;
        for (int i = 0; i < n; i++) {
            int li = i, ri = n-i-1;
            if(2*max(li,ri) >= a[i]){
                flag = false;
                break;
            }
        }
        // for(int i  = 0; i<n; i++){
        //     for(int j = i+1; j<n; j++){
        //         if((abs(a[i]-a[j]) < abs(i-j)) && n==2){
        //             flag = false;
        //             break;
        //         }
        //         else if((abs(a[i]-a[j]) < abs(i-j)) && abs(i-j) <= n-1 && n>2){
        //             flag = false;
        //             break;
        //         }
        //     }
        // }
        if(flag == true){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}