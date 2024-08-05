#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int n = s.length();
        bool flag = false;
        string res = "";
        res += s[0];
        if(n == 1){
            char temp = s[0];
            if(temp < 'z'){
                temp = s[0]+1;
                res += temp;
            }
            else{
                temp = s[0] - 1;
                res += temp;
            }
        }
        if(n == 2){
            res += s[1];
            char temp = s[1];
            if(temp < 'z'){
                temp = s[1]+1;
                res += temp;
            }
            else{
                temp = s[1] - 1;
                res += temp;
            }
        }
        if(n>1){
            res += s[1];
        }
        for(int i = 2; i<n; i++){
            if(s[i-1] == s[i] && flag == false){
                flag = true;
                char temp = s[i];
                if(temp < 'z'){
                    temp = s[i] + 1;
                    res += temp;
                    if(n>2){
                        res += s[i];
                    }
                }
                else{
                    temp = s[i] - 1;
                    res += temp;
                    if(n>2){
                        res += s[i];
                    }
                }
            }
            else{
                if(n>2){
                    res += s[i];
                }
            }
        }
        int maxi = 0;
        for(int i = 0; i<=n; i++){
            for(char c = 'a'; c<='z'; c++){
                string temp = s.substr(0, i) + c + s.substr(i);
                int time = 2;
                for(int j = 1; j<temp.length(); j++){
                    if(temp[j] == temp[j-1]){
                        time++;
                    }
                    else{
                        time = time + 2;
                    }
                }
                if(time > maxi){
                    maxi = time;
                    res = temp;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}