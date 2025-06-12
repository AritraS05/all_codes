#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        string s1 = "baton";
        string s2 = s;

        int i = 0, j = 0;

        while (i < s1.size() && j < s2.size()) {
            if (s1[i] == s2[j]) {
                i++;
            }
            j++;
        }

        if(i == s1.size()){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}