#include<iostream>
#include<stack>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int res = 0;
        for(int i = 0; i<n; i = i+2){
            if(s[i] == '_'){
                if(i == 0 || s[i-1] == ')'){
                    s[i] = '(';
                }
                else{
                    s[i] = ')';
                }
            }
        }
        stack<int>store;
        for(int i = 0; i<n; i++){
            if(s[i] == '('){
                store.push(i);
            }
            else if(s[i] == ')'){
                if(!store.empty()){
                    res += i - store.top();
                    store.pop();
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}