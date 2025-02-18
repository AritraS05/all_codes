#include<bits/stdc++.h>
using namespace std;
#define int ll
using ll = long long;
using pii = pair<int, int>;

int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        string res = to_string(n);
        if(res.find('7') != string::npos) {
            cout << 0 << endl;
            continue;
        }
        
        auto precalc = [](int res, int count) {
            string numStr = to_string(res - count);
            int m = numStr.length();
            
            vector<map<int, int>> curr(count + 1), next(count + 1);
            curr[count][0] = 1;
            
            for(int pos = 0; pos < max(m, 12LL); pos++) {
                next = vector<map<int, int>>(count + 1);
                int digit = 0;
                if(pos < m){
                    digit = numStr[m - 1 - pos] - '0';
                }
                for(int i = 0; i <= count; i++) {
                    for(auto& state : curr[i]) {
                        int c = state.first;
                        int m = state.second;
                        for(int j = 0; j <= i; j++) {
                            int newi = (digit + c + j) % 10;
                            int newc = (digit + c + j) / 10;
                            if(newc >= 40){
                                continue;
                            }
                            int newm = m;
                            if(newi == 7){
                                newm |= 2;
                            }
                            next[i - j][newc] |= newm;
                        }
                    }
                }
                curr = next;
            } 
            return curr[0][0] & 2;
        };
        
        int answer = -1e8;
        for(int r = 1; r <= 30; r++) {
            if(precalc(n, r)) {
                answer = r;
                break;
            }
        }
        
        cout << answer << endl;
    }
    
    return 0;
}