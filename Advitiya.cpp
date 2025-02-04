#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string comp = "ADVITIYA";
        int count = 0;
        for(int i = 0; i<8; i++){
            int diff = abs(s[i] - comp[i]);
            if(s[i] > comp[i]){
                count += 90-s[i] + comp[i]-64;
            }
            else{
                count += diff;
            }
        }
        cout<<count<<endl;
    }
}
