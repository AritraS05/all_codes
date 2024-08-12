#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cows = n / 4;
        int netlegs = cows * 4;
        vector<int> legs(netlegs);
        int rem = n - netlegs;
        int chicks = rem / 2;
        int res = cows + chicks;
        cout << res << endl;
    }
    return 0;
}
