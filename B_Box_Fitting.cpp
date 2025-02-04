#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define            pb                push_back
#define          sz(a)               (int)a.size()
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,W;
        cin>>n>>W;
        vector<int>w(n);
        for(int i = 0; i<n; i++){
            cin>>w[i];
        }
        sort(rall(w));
        priority_queue<int> pq; 
        pq.push(W); 

        for (int i = 0; i < n; i++) {
            int current = pq.top();
            pq.pop();
            if (current >= w[i]) {
                current -= w[i];
            } else {
                pq.push(current);
                current = W - w[i]; 
            }
            pq.push(current); 
        }

        cout << pq.size() << endl;
    }
    
    return 0;
}