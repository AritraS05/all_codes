#include<iostream>
using namespace std;
const int MAX = 200007;
int a[MAX],sum[MAX];
int main(){
    sum[0] = 0;
    for(int i = 1; i<MAX-1; i++){
        int count = 0;
        int temp = i;
        while(temp){
            temp/=3;
            count++;
        }
        a[i] = count;
        sum[i] = sum[i-1] + a[i];
    }
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        cout<<sum[r]-sum[l-1] + a[l]<<endl;
    }
    return 0;
}