#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<string>a(n);
        for(int i=0;i<n;i++){
            string temp;
            cin>>temp;
            a.push_back(temp);
        }
        vector<string>res(n/k);
        for(int i=0;i<n;i = i+k){
            string temp = "";
            for(int j=0;j<n;j = j+k){
                temp += a[i][j];
            }
            res.push_back(temp);
        }
        for(int i=0;i<n/k;i++){
            cout<<res[i]<<endl;
            cout<<endl;
        }
    }
    return 0;
}