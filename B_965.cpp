#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p(n);
        for(int i = 0; i<n; i++){
            cin>>p[i];
        }
        cout<<p[n-1]<<" ";
        for(int i = 0; i<n-1; i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}