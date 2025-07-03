#include<bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using pii = pair<int, int>;

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> b(n);
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        vector<pii> res;
        
        bool flag = true;
        while(flag){
            flag = false;
            for(int i = 1; i < n; i++){
                int j = i;
                while(j > 0 && a[j-1] > a[j]){
                    swap(a[j-1], a[j]);
                    res.push_back({0, j-1}); 
                    j--;
                    flag = true;
                }
            }
       
            for(int i = 1; i < n; i++){
                int j = i;
                while(j > 0 && b[j-1] > b[j]){
                    swap(b[j-1], b[j]);
                    res.push_back({1, j-1}); 
                    j--;
                    flag = true;
                }
            }

            for(int i = 0; i < n; i++){
                if(a[i] >= b[i]){
                    swap(a[i], b[i]);
                    res.push_back({2, i});
                    flag = true;
                }
            }
        }
        
        cout << res.size() << endl;
        for(int i = 0; i < res.size(); i++){
            cout << res[i].first + 1 << " " << res[i].second + 1 << endl;
        }
    }
    
    return 0;
}