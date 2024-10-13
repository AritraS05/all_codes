#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>x(n);
        vector<int>k(q);
        unordered_map<int, int> ans;

        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        for (int i = 0; i < q; i++) {
            cin >> k[i];
        }

        int l = n;
        n -= 1;

        for (int i = 0; i < l - 1; i++) {
            ans[x[i]] = n - i + i * (n - i + 1);

            if (x[i + 1] - x[i] > 1) {
                ans[x[i] + 1] = n - i + i * (n - i);
            }
        }
        ans[x[l - 1]] = n;

        int gg = ans.size();
        for(int i = 0; i<gg; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}