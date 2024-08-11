#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        if(k%2 != 0){
            cout<<x<<" "<<y<<endl;
        }
        for(int i = 0;i<k/2; i++){
            cout<<x-i-1<<" "<<y<<endl;
            cout<<x+i+1<<" "<<y<<endl;
        }
    }
    return 0;
}