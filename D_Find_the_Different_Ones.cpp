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
        vector<int> diff(n, -1);
        for (int i = n - 2; i >= 0; i--) {
        if (a[i] != a[i + 1]) {
                diff[i] = i + 1;
            } else {
                diff[i] = diff[i + 1];
            }
        }

        int q;
        cin >> q;
        for (int i = 0; i < q; i++) {
            int x, y;
            cin >> x >> y;
            x--; y--; 
            if (diff[x] != -1 && diff[x] <= y) {
                cout << x + 1 << " " << diff[x] + 1 << endl; 
            } else {
                cout << -1 << " " << -1 << endl;
            }
        }
    }
    return 0;
}