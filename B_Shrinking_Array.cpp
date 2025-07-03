#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        bool flag = false;
        for (int i = 0; i<n-1; i++) {
            if (abs(a[i] - a[i + 1]) <= 1) {
                cout<<0<<endl;
                flag = true;
                break;
            }
        }

        int res = n; 
        for (int i = 0; i < n; i++) {
            int mini = 1e8;
            int maxi = 0;
            for (int j = i; j < n; j++) {
                if ((j - i - 1) >= res){
                    break;
                }
                if (j >i) {
                    mini = min(mini, a[j - 1]);
                    maxi = max(maxi, a[j - 1]);
                    if (mini <= a[j] + 1 && maxi >= a[j] - 1) {
                        res = (j - i - 1);
                        break;
                    }
                }
                mini = 1e8;
                maxi = 0;
                for (int k = i+1; k <= j; k++) {
                    mini = min(mini, a[k]);
                    maxi = max(maxi, a[k]);
                }
                if (mini <= a[i] + 1 && maxi >= a[i] - 1) {
                    res = (j - i - 1);
                    break;
                }
            }
        }
        if(!flag){
            if(res == n){
                cout<<-1<<endl;
            } else {
                cout<<res<<endl;
            }
        }
    }

    return 0;
}
