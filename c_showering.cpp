#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m,temp,temp1,temp2=0;
        cin>>n>>s>>m;
        bool flag = false;
        for(int i=0;i<n;i++){
            vector<int> v;
            
            for(int j=0;j<2;j++){
                int a;
                cin>>a;
                v.push_back(a);
            }
            if(abs(temp2 - v[0]+1) >= s){
                flag = true;
            }
            temp2 = v[1];
            
            if(i == 0){
                temp1 = v[0];
            }
            if(i == n-1){
                temp = v[1];
            }
            if(abs(v[0]-v[1]+1)>=s){
                flag = true;
                break;
            }
        }
        if(m-temp+1 >=s){
            flag = true;
        }
        if(temp1+1 >= s){
            flag = true;
        }
        if(flag == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}