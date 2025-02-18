#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        if(n==1){
            if(k<=1){
                cout<<"NO"<<endl;
            }
            else{
                if(m == 0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            continue;
        }
        bool flag = false;

        // if(m == n-1){//*tree bn ja rha /
        //     //todo: diam-->1 or 2 --> k-1>2
        //     if(k-1 > 2){
        //         cout<<"YES"<<endl;
        //     }
        //     else{
        //         cout<<"NO"<<endl;
        //     }
        //     flag = true;
        //     continue;
        // }
        // else 
        if(m<n-1){ //*too less 
            cout<<"NO"<<endl;
            flag = true;
            continue;
        }
        // else{
        //     if(k-1 > 2){
        //         cout<<"YES"<<endl;
        //     }
        //     else{
        //         cout<<"NO"<<endl;
        //     }
        //     flag = true;
        //     continue;
        // }

        int connections = ((n-1)*n)/2;
        if(m == connections){//*complete graph wla case
            if(k<=2){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
            flag = true;
            continue;
        }
        else if( m > connections){
            cout<<"NO"<<endl;
            flag = true;
            continue;
        }
        else{
            if(k<=3){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
            continue;
        }

        if(!flag){
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}