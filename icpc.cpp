#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, A, B, C, D, P, Q, Y;
        cin >> N >> A >> B >> C >> D >> P >> Q >> Y;
        
        vector<int> cities(N);
        for (int i = 0; i < N; ++i) {
            cin >> cities[i];
        }
        
        A--; B--; C--; D--;
        
        int walk_time = abs(cities[B] - cities[A]) * P;
        
        int total_train_time = INT_MAX;
        int walk_to_C = abs(cities[C] - cities[A]) * P;
        
        if (walk_to_C <= Y) { 
            int train_time = abs(cities[D] - cities[C]) * Q;
            int walk_from_D_to_B = abs(cities[B] - cities[D]) * P;
            total_train_time = walk_to_C + train_time + walk_from_D_to_B;
        }
        
        cout << min(walk_time, total_train_time) << endl;
    }
    
    return 0;
}
