#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSmallIndices(int N, const vector<int>& A, const vector<int>& B) {
    vector<int> C(N);
    for (int i = 0; i < N; ++i) {
        C[i] = min(A[i], B[i]);
    }

    int count = 0;
    for (int i = 2; i < N; ++i) {  
        bool isSmall = false;
        for (int j = 0; j < i - 1 && !isSmall; ++j) {
            for (int k = j + 1; k < i && !isSmall; ++k) {
                if (C[i] <= C[j] + C[k]) {
                    isSmall = true;
                }
            }
        }
        if (isSmall) ++count;
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N; 

        vector<int> A(N), B(N);
        for (int i = 0; i < N; ++i) cin >> A[i];
        for (int i = 0; i < N; ++i) cin >> B[i];

        cout << maxSmallIndices(N, A, B) << "\n";
    }

    return 0;
}
