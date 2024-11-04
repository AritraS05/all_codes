#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        map<int, int> res;
        int temp_k = k; 
        while(k--) {
            int b, c;
            cin >> b >> c;
            res[b] += c;
        }
        vector<int> newres;
        for(auto it : res) {
            newres.push_back(it.second);
        }
        sort(newres.begin(), newres.end(), greater<int>());
        
        int ans = 0;
        for(int i = 0; i < temp_k && i < newres.size(); i++) { 
            if(n>0){
                ans += newres[i];
            }
            n--;
        }
        cout << ans << endl;
    }
    return 0;
}
