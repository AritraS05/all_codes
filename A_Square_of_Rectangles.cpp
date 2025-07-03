#include <bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using pii = pair<int, int>;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> l(3);
        vector<int> b(3);
        cin >> l[0] >> b[0] >> l[1] >> b[1] >> l[2] >> b[2];

        int area = (l[0] * b[0]) + (l[1] * b[1]) +( l[2] * b[2]);

        int side = int(floor(sqrt(area)));
        if (side * side != area) {
            cout << "NO"<<endl;
            continue;
        }

        bool flag = false;
        for (int i = 0; i < 3; ++i) {
            vector<int>res = {((i + 1) % 3), ((i + 2) % 3)};

            if (l[i] > side || b[i] > side){
                continue;
            }

            if ((side) > l[i] && (side) > b[i]) {
                for (int m = 0; m < 2; ++m) {
                    int j = res[m];
                    int k = res[1 - m];
                    if (l[j] <= (side - l[i]) && b[j] <= side && l[k] <= l[i] && b[k] <= (side - b[i])) {
                        flag = true;
                        break;
                    }
                }
            }

            if(flag == false){
                if ((side - l[i]) > 0) {
                    int j = res[0];
                    int k = res[1];
                    if (b[j] == side && b[k] == side && l[j] + l[k] == (side - l[i])){
                        flag = true;
                        break;
                    }
                    if (l[j] == (side - l[i]) && l[k] == (side - l[i]) && b[j] + b[k] == side){
                        flag = true;
                        break;
                    }
                }

                if ((side - b[i]) > 0) {
                    int j = res[0];
                    int k = res[1];
                    if (b[j] == (side - b[i]) && b[k] == (side - b[i]) && l[j] + l[k] == l[i]){
                        flag = true;
                        break;
                    }
                    if (l[j] == l[i] && l[k] == l[i] && b[j] + b[k] == (side - b[i])){
                        flag = true;
                        break;
                    }
                }
            }
        }

        if(flag) {
            cout << "YES"<<endl;;
        } else {
            cout << "NO"<<endl;
        }
    }

    return 0;
}
