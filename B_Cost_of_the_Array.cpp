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
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        int res = n/2 + 1;
        if(n != k){
            bool flag = false;
            for (int i = 1; i <= n - k + 1; i++) {
                if (a[i] != 1) {
                    flag = true;
                    break;
                }
            }
            res = 1;
            if (!flag) {
                 res = 2;
                for (int i = n - k ; i < n; i += 2) {
                    if (a[i] != res) {
                        break;
                    }
                    res++;
                }
            } 
        }
        else{
            for (int i = 1; i < n; i += 2) {
                if (a[i] != (i+1) / 2) {
                    res = (i+1) / 2;
                    break;
                }
            }
        }
        cout<<res<<endl;
    }
    
    return 0;
 }

 
