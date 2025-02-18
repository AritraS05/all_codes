#include<bits/stdc++.h>
#include<climits>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a;
        for(int i = 0; i<n; i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        // k--;
        // while(k--){
        //     sort(a.begin(),a.end());
        //     int mini = 1e18;
        //     vector<int>res;
        //     for(int i = 0; i<a.size()-1; i++){
        //         res.push_back(a[i+1]-a[i]);
        //         mini = min(mini,(a[i+1]-a[i]));
        //     }
        //     bool flag = true;
        //     for(int i = 0; i<res.size(); i++){
        //         for(int j = 0; j<a.size(); j++){
        //             if(res[i] == a[j]){
        //                 mini = res[i];
        //                 a.push_back(0);
        //                 flag = false;
        //                 break;
        //             }
        //         }
        //     }
        //    if(flag) a.push_back(mini);
        // }
        // sort(a.begin(),a.end());
        // cout<<a[0]<<endl;
        if(k>=3){
            cout<<0<<endl;
        }
        else if(k == 1){
            int mini = 1e18;
            sort(a.begin(),a.end());
            for(int i = 0; i<a.size()-1; i++){
                mini = min(min(a[i], mini), a[i+1] - a[i]);
            }
            cout<<mini<<endl;
        }
        else if( k == 2){
            // vector<int>res;
            // sort(a.begin(),a.end());
            // for(int i = 0; i<a.size()-1; i++){
            //     res.push_back(a[i+1]-a[i]);
            // }
            // sort(res.begin(),res.end());
            // map<int,int>minmini;
            // for(int i = 0; i<res.size(); i++){
            //     vector<int>temp = a;
            //     temp.push_back(res[i]);
            //     sort(temp.begin(),temp.end());
            //     int minim = 1e18;
            //     for(int j = 0; j<temp.size()-1;j++){
            //         minim = min(minim,temp[j+1]-a[j]);
            //         minmini[res[i]] = minim;
            //     }
            // }
            // int minim1 = 1e18;
            // for(auto it : minmini){
            //     minim1 = min(minim1,it.second);
            // }
            // for(auto it:minmini){
            //     if(it.second == minim1){
            //         a.push_back(it.first);
            //         break;
            //     }
            // }
            // vector<int>res1;
            // sort(a.begin(),a.end());
            // for(int i = 0; i<a.size()-1; i++){
            //     res1.push_back(a[i+1]-a[i]);
            // }
            // sort(res1.begin(),res1.end());
            // a.push_back(res1[0]);
            // sort(a.begin(),a.end());
            sort(begin(a), end(a));
            int d = a[0];
            for (int i = 0; i < n - 1; i++) d = min(d, a[i + 1] - a[i]);
            for (int i = 0; i < n; i++){
                for (int j = 0; j < i; j++) {
                    int v = a[i] - a[j];
                    int p = lower_bound(begin(a), end(a), v) - begin(a);
                    if (p < n) d = min(d, a[p] - v);
                    if (p > 0) d = min(d, v - a[p - 1]);
                }
            }
            cout << d << endl;
        }
    }
    
    return 0;
}