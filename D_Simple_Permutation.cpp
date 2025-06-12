#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

pair<int, int> findLongestPalindrome(const string& s) {
    int n = s.length();
    int maxLen = 0;
    int start = -1;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (isPalindrome(s, i, j) && (j - i + 1) > maxLen) {
                maxLen = j - i + 1;
                start = i;
            }
        }
    }

    return {start, maxLen};  
}

int main() {
    int n;
    string s;
    cin >> n >> s;

    if (s.length() != n) {
        cerr << "Error: String length does not match the input size.\n";
        return 1;
    }

    int count = 0;
    while (true) {
        auto [start, len] = findLongestPalindrome(s);
        if (len <= 1) break; 

        string toRemove = s.substr(start, len);

        s.erase(start, len);
        count++;
    }

    cout << count + s.length() -1 << endl;

    return 0;
}
