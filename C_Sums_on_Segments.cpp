#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int str1 = 0, str2 = 0, end1 = 1e9, end2 = -1e9;
        int current = 0, ministr = 0, maxistr = 0, miniend = 1e9, maxiend = -1e9;

        for (int i = 0; i < n; i++) {
            current += a[i];
            if (a[i] != -1 && a[i] != 1) {
                miniend = ministr;
                maxiend = maxistr;
                ministr = current;
                maxistr = current;
            }
            str1 = min(str1, current - maxistr);
            end1 = min(end1, current - maxiend);
            ministr = min(ministr, current);
            str2 = max(str2, current - ministr);
            end2 = max(end2, current - miniend);
            maxistr = max(maxistr, current);
        }

        vector<int> res;
        if (end1 > str2) {
            for (int i = str1; i <= str2; i++){
                 res.push_back(i);
            }
            for (int i = end1; i <= end2; i++){
                 res.push_back(i);
            }
        } else if (end2 < str1) {
            for (int i = end1; i <= end2; i++){
                 res.push_back(i);
            }
            for (int i = str1; i <= str2; i++){
                 res.push_back(i);
            }
        } else {
            for (int i = min(str1, end1); i <= max(str2, end2); i++){
                 res.push_back(i);
            }
        }

        cout << res.size() << endl;
        for (int x : res) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;

}
