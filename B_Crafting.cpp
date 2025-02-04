#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long>  b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }  
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "YES"<<endl;
            continue;
        }
        flag = false;
        for (int i = 0; i < n; i++) {
            if (a[i] >= b[i]) continue;
            long long diff = b[i] - a[i];
            long long res = 0;
            bool flag1 = true;
            
            vector<long long> temp = a;
            for (int j = 0; j < n; j++) {
                if (j == i) continue;
                if (temp[j] < diff + b[j]) {
                    flag1 = false;
                    break;
                }
                res += temp[j] - b[j];
            }
            if (flag1 && res >= diff) {
                flag = true;
                break;
            }
        }
        
        cout << (flag ? "YES" : "NO")<<endl;
    }
    return 0;
}