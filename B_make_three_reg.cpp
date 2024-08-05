#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int n1 = s1.length();
        int n2 = s2.length();
        int count = 0;
        bool flag = false;
        for(int i = 0; i<n1-1; i++){
            for(int j = 0; j<n2-1; j++){
                if(s1[i] == '.'){
                    flag = true;
                    if(s1[i+1] == 'x'){
                        if(s2[i] == 'x'){
                            count++;
                        }
                    }
                }
                else if(s2[i] == '.'){
                    flag = true;
                    if(s2[i+1] == 'x'){
                        if(s1[i] == 'x'){
                            count++;
                        }
                    }
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}