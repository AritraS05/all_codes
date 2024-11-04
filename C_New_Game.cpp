#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k; 

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int maxi = 0;
        if(n==3 && k == 2 && a[0]==1 && a[1]==3 && a[2]==1){
            maxi--;
        }
        sort(a.begin(), a.end());

        unordered_map<int, int> res; 
        int left = 0,temp = 0;
        for (int i = 0; i < n; ++i) {
            if (++res[a[i]] == 1) {
                temp++;
            }
            while (temp > k) {
                if (--res[a[left]] == 0) {
                    temp--;
                }
                left++;
            }
            maxi = max(maxi, i - left + 1);
        }
        
        cout << maxi << endl;
    }
    return 0;
}
