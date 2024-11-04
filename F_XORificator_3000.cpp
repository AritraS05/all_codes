#include <iostream>
using namespace std;

// Function to calculate XOR from 1 to n
long long xorFrom1ToN(long long n) {
    // XOR pattern repeats every 4 numbers
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

// Function to calculate XOR from l to r
long long xorInRange(long long l, long long r) {
    return xorFrom1ToN(r) ^ xorFrom1ToN(l - 1);
}

// Function to handle each query and compute the result
long long computeXOR(long long l, long long r, int i, long long k) {
    long long range = 1LL << i;  // 2^i
    long long result = 0;

    // Loop through each segment in [l, r] with modulo range
    for (long long start = ((l + range - 1) / range) * range; start <= r; start += range) {
        long long segmentEnd = min(r, start + range - 1);
        long long segmentXOR = xorInRange(start, segmentEnd);

        // Check if k lies within the segment [start, segmentEnd]
        if (k >= start && k <= segmentEnd) {
            segmentXOR ^= k;
        }
        result ^= segmentXOR;
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r, k;
        int i;
        cin >> l >> r >> i >> k;
        cout << computeXOR(l, r, i, k) << endl;
    }
    return 0;
}
