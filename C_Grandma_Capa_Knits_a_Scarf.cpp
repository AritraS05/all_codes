#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 

bool palin(string s, char c, int &removals) {
    int l = 0, r = s.size() - 1;
    removals = 0;
    while (l < r) {
        if (s[l] == s[r]) {
            l++, r--;
        } else if (s[l] == c) {
            removals++;
            l++;
        } else if (s[r] == c) {
            removals++;
            r--;
        } else {
            return false;
        }
    }
    return true;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int min_removals = INT_MAX;
        bool possible = false;
        
        for (char c = 'a'; c <= 'z'; c++) {
            int removals;
            if (palin(s, c, removals)) {
                possible = true;
                min_removals = min(min_removals, removals);
            }
        }
        
        if (possible) {
            cout << min_removals << endl;
        } else {
            cout << "-1"<<endl;
        }
    }
    
    return 0;
}