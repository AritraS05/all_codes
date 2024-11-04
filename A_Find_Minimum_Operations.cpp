#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
       
        long long ans = 0;
        if(k>1){
            while(n){
                ans += n%k;
                n /= k;
            }
        }
         if(k == 1) ans = n;
        cout<< ans<<endl;
    }
    return 0;
}
