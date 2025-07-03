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
        cin>>n;
        vector<pair<int,int>>a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i].first>>a[i].second;
        }
        if(n < 3){
            cout<<n<<endl;
            continue;
        }
        int ans = 1000000000000000000;
        vector<pair<pair<int,int>,pair<int,int>>>prefix(n);
        vector<pair<pair<int,int>,pair<int,int>>>suffix(n);
        int max_x = 0, min_x = 1000000000, max_y = 0, min_y = 1000000000;
        for(int i = 0; i < n; i++) {
            prefix[i] = {{max_x, min_x}, {max_y, min_y}};
            max_x = max(max_x, a[i].first);
            min_x = min(min_x, a[i].first);
            max_y = max(max_y, a[i].second);
            min_y = min(min_y, a[i].second);
        }

        max_x = 0, min_x = 1000000000, max_y = 0, min_y = 1000000000;
        for(int i = n-1; i >= 0; i--) {
            suffix[i] = {{max_x, min_x}, {max_y, min_y}};
            max_x = max(max_x, a[i].first);
            min_x = min(min_x, a[i].first);
            max_y = max(max_y, a[i].second);
            min_y = min(min_y, a[i].second);
        }
        for(int i = 0; i<n; i++){
            int maxi_X = max(prefix[i].first.first, suffix[i].first.first);
            int mini_X = min(prefix[i].first.second, suffix[i].first.second);
            int maxi_Y = max(prefix[i].second.first, suffix[i].second.first);
            int mini_Y = min(prefix[i].second.second, suffix[i].second.second);
            int side = maxi_X- mini_X + 1;
            int side2 = maxi_Y - mini_Y + 1;
            int area = side * side2;
            if(area > n-1){
                ans = min(ans, area);
            } else {
                area += (min(side,side2));
                ans = min(ans, area);
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}