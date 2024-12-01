#include<bits/stdc++.h>
using namespace std;

template<typename T>
void fun(T arr[10]){
    map<T,int>f;
    for(int i=0;i<10;i++){
        f[arr[i]]++;
    }
    for(auto it:f){
        if(it.second == 1){
            cout<<it.first<<" ";
        }
    }
    cout<<endl;
}


int main(){
    int arr[10] = {1,2,3,4,5,6,1,2,7,8};
    fun(arr);
    return 0;
}