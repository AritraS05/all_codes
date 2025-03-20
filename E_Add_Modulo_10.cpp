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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool flag = false;
        for(int i = 0; i<n; i++){
            if(a[i]%5 == 0){
                flag = true;
                a[i] = a[i] + a[i]%10;
            }
        }
        if(!flag){
            bool f1=false,f2 =false;
            for(int i = 0; i<n; i++){
                int temp = a[i];
                while(temp%10 != 2){
                    temp = temp+temp%10;
                }
                if(temp%20 == 2){
                    f1= true;
                }
                else{
                    f2 = true;
                }
            }
            if(f1 & f2){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
        else{
            if(*min_element(a.begin(),a.end()) == *max_element(a.begin(),a.end())){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    
    return 0;
}