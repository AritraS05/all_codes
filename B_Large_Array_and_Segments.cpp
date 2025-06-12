#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += a[i];
        }
        if(sum*k < x){
            cout<<0<<endl;
            continue;
        }

        int p1 = 1;
        int p2 = n*k;
        while(p1<=p2){
            int mid = (p1) + (p2-p1)/2;
            int temp = ((n*k) - mid + 1);
            int total = (temp/n)*sum;
            for(int i = n - (temp % n); i < n; i++){ 
                total += a[i];
            }

            if(total >= x){
                p1 = mid+1;
            }
            else{
                p2 = mid-1;
            }
        }
        // if(x%sum == 0){
        //     p2--;
        // }
        cout<<p2<<endl;
    }
    
    return 0;
}
