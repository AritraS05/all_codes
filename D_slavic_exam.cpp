#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string t;
        cin>>t;
        int j = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] == '?'){
                if(j<t.size()){
                    s[i] = t[j];
                    j++;
                }
                else{
                    s[i] = 'a';
                }
            }
            else if(s[i] == t[j]){
                j++;
            }
        }
        // map<char,int>fs;
        // for(int i=0;i<s.length();i++){
        //     fs[s[i]]++;
        // }
        // map<char,int>ft;
        // for(int i=0;i<t.length();i++){
        //     ft[t[i]]++;
        // }
        // bool flag = true;
        // for(int j = 0; j<t.length(); j++){
        //     if(fs[t[j]] < ft[t[j]]){
        //         flag = false;
        //     }
        // }
        // if(flag == false){
        //     cout<<"NO"<<endl;
        // }
        // else{
        //     cout<<"YES"<<endl;
        //     cout<<s<<endl;
        // }
        if(j>= t.size()){
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}