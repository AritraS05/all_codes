    #include<bits/stdc++.h>
    using namespace std;
    
    #define int ll
    using ll = long long;
    using pii = pair<int, int>;
    
    int32_t main(){
        int t;
        cin>>t;
        while(t--){
            int k;
            cin>>k;
            int temp = k;
            vector<int>res;
            while(k>0){
                for(int i = 500; i>=2; i--){
                    if((i*(i-1)/2) <= k){
                        res.push_back(i);
                        k -= i*(i-1)/2;
                        break;
                    }
                }
            }
            int sum = 0;
            for(int i = 0; i<res.size(); i++){
                sum += res[i];
            }
            vector<pair<int,int>>attack;
            for(int i = 0; i<res.size(); i++){
                int xx = i*1000;
                int yy = i;
                for(int j = 0; j<res[i]; j++){
                    attack.push_back({xx,yy});
                }
            }
            if(temp == 0){
                cout<<1<<endl;
                cout<<0<<" "<<0<<endl;
                continue;
            }
            cout<<sum<<endl;
            for(int i = 0; i<attack.size(); i++){
                cout<<attack[i].first<<" "<<attack[i].second<<endl;
            }
        }
        
        return 0;
    }