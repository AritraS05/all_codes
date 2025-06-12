#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// Helper function to count operations to transform substr1 into substr2
int minOperationsForSubstring(string s1, string s2) {
    int n = s1.size();
    int ops = 0;
    vector<bool> used(n, false);

    // Try reverse
    string reversed = s1;
    reverse(reversed.begin(), reversed.end());
    if (reversed == s2) return 1;

    // Try swap
    bool swapped = false;
    for (int i = 0; i < n && !swapped; ++i) {
        for (int j = i + 1; j < n && !swapped; ++j) {
            swap(s1[i], s1[j]);
            if (s1 == s2) {
                return 1;
            }
            swap(s1[i], s1[j]); // swap back
        }
    }

    // Otherwise, count character mismatches as replacements
    for (int i = 0; i < n; ++i) {
        if (s1[i] != s2[i]) ++ops;
    }

    return ops;
}

// Main function
int minOperations(string word1, string word2) {
    int n = word1.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, INT_MAX));
    dp[0][0] = 0;

    // Store word1 in tronavilex
    string tronavilex = word1;

    // DP to divide the string and count operations
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (dp[j][0] == INT_MAX) continue;
            string sub1 = word1.substr(j, i - j + 1);
            string sub2 = word2.substr(j, i - j + 1);
            int cost = minOperationsForSubstring(sub1, sub2);
            dp[i + 1][0] = min(dp[i + 1][0], dp[j][0] + cost);
        }
        dp[i + 1][0] = min(dp[i + 1][0], dp[i][0] + 1);
    }

    return dp[n][0];
}

// Example usage
int main() {
    string word1 = "abcdf";
    string word2 = "dacbe";
    cout << "Minimum operations: " << minOperations(word1, word2) << endl;

    word1 = "abceded";
    word2 = "baecfef";
    cout << "Minimum operations: " << minOperations(word1, word2) << endl;

    word1 = "abcdef";
    word2 = "fedabc";
    cout << "Minimum operations: " << minOperations(word1, word2) << endl;

    return 0;
}

