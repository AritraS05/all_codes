#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        vector<int>a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        vector<int> result(n, -1); // Initialize result array with -1

        for (int i = 0; i < n; i++) {
            if (a[i] == 0) { // If it's a volcano
                int lava_level = 0;
                for (int j = i - 1; j >= 0; j--) { // Flow to the left
                    lava_level += p;
                    if (a[j] > lava_level) break;
                    if (result[j] == -1 || result[j] > lava_level / p) {
                        result[j] = lava_level / p;
                    }
                }
                lava_level = 0;
                for (int j = i + 1; j < n; j++) { // Flow to the right
                    lava_level += p;
                    if (a[j] > lava_level) break;
                    if (result[j] == -1 || result[j] > lava_level / p) {
                        result[j] = lava_level / p;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (a[i] > 0) {
                cout << result[i] << " ";
            }
        }
        cout << endl;
    }
}
