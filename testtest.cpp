#include <bits/stdc++.h>
using namespace std;

using lll = long long;
const lll BIG = LLONG_MAX / 4;

struct BITX {
    int size;
    vector<lll> data;
    BITX(int val = 0) : size(val), data(val + 1, 0) {}

    void push(int idx, lll delta) {
        while (idx <= size) {
            data[idx] += delta;
            idx += idx & -idx;
        }
    }

    lll query(int idx) const {
        lll ans = 0;
        while (idx > 0) {
            ans += data[idx];
            idx -= idx & -idx;
        }
        return ans;
    }

    int position(lll k) const {
        int pos = 0;
        for (int i = 1 << (31 - __builtin_clz(size)); i; i >>= 1) {
            int temp = pos + i;
            if (temp <= size && data[temp] < k) {
                k -= data[temp];
                pos = temp;
            }
        }
        return pos + 1;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int l, q;
        cin >> l >> q;
        string top, bot;
        cin >> top >> bot;

        BITX topC(l), topS(l), botC(l), botS(l);
        int topOne = 0, botOne = 0;

        for (int i = 0; i < l; ++i) {
            if (top[i] == '1') {
                topC.push(1 + i, 1);
                topS.push(1 + i, 1 + i);
                topOne++;
            }
        }

        for (int i = 0; i < l; ++i) {
            if (bot[i] == '1') {
                int rev = l - i;
                botC.push(rev, 1);
                botS.push(rev, rev);
                botOne++;
            }
        }

        int low = max(1, l - botOne + 1), high = min(topOne, l);
        lll output = -1;
        if (low <= high) {
            while (low < high) {
                int mid = (low + high) >> 1;
                int rem1 = l - mid + 1;
                lll val1;
                if (!mid) val1 = 0;
                else if (mid > topOne) val1 = BIG;
                else {
                    int p = topC.position(mid);
                    lll sm = topS.query(p);
                    val1 = sm - 1LL * mid * (mid + 1) / 2;
                }
                if (!rem1) val1 += 0;
                else if (rem1 > botOne) val1 += BIG;
                else {
                    int p = botC.position(rem1);
                    lll sm = botS.query(p);
                    val1 += sm - 1LL * rem1 * (rem1 + 1) / 2;
                }

                int rem2 = l - (mid + 1) + 1;
                lll val2;
                if (!(mid + 1)) val2 = 0;
                else if ((mid + 1) > topOne) val2 = BIG;
                else {
                    int p = topC.position(mid + 1);
                    lll sm = topS.query(p);
                    val2 = sm - 1LL * (mid + 1) * (mid + 2) / 2;
                }
                if (!rem2) val2 += 0;
                else if (rem2 > botOne) val2 += BIG;
                else {
                    int p = botC.position(rem2);
                    lll sm = botS.query(p);
                    val2 += sm - 1LL * rem2 * (rem2 + 1) / 2;
                }

                if (val1 < val2) high = mid;
                else low = mid + 1;
            }

            int rem = l - low + 1;
            if (!low) output = 0;
            else if (low > topOne) output = BIG;
            else {
                int p = topC.position(low);
                lll sm = topS.query(p);
                output = sm - 1LL * low * (low + 1) / 2;
            }
            if (!rem) output += 0;
            else if (rem > botOne) output += BIG;
            else {
                int p = botC.position(rem);
                lll sm = botS.query(p);
                output += sm - 1LL * rem * (rem + 1) / 2;
            }
            if (output >= BIG / 2) output = -1;
        }
        cout << output << endl;

        while (q--) {
            int o1, pos;
            cin >> o1 >> pos;
            if (o1 == 1) {
                auto index = pos;
                if (top[index - 1] == '1') {
                    top[index - 1] = '0';
                    --topOne;
                    topC.push(index, -1);
                    topS.push(index, -index);
                } else {
                    top[index - 1] = '1';
                    ++topOne;
                    topC.push(index, 1);
                    topS.push(index, index);
                }
            } else {
                auto index = pos;
                int rev = l - index + 1;
                if (bot[index - 1] == '1') {
                    bot[index - 1] = '0';
                    --botOne;
                    botC.push(rev, -1);
                    botS.push(rev, -rev);
                } else {
                    bot[index - 1] = '1';
                    ++botOne;
                    botC.push(rev, 1);
                    botS.push(rev, rev);
                }
            }

            low = max(1, l - botOne + 1), high = min(topOne, l);
            output = -1;
            if (low <= high) {
                while (low < high) {
                    int mid = (low + high) >> 1;
                    int rem1 = l - mid + 1;
                    lll val1;
                    if (!mid) val1 = 0;
                    else if (mid > topOne) val1 = BIG;
                    else {
                        int p = topC.position(mid);
                        lll sm = topS.query(p);
                        val1 = sm - 1LL * mid * (mid + 1) / 2;
                    }
                    if (!rem1) val1 += 0;
                    else if (rem1 > botOne) val1 += BIG;
                    else {
                        int p = botC.position(rem1);
                        lll sm = botS.query(p);
                        val1 += sm - 1LL * rem1 * (rem1 + 1) / 2;
                    }

                    int rem2 = l - (mid + 1) + 1;
                    lll val2;
                    if (!(mid + 1)) val2 = 0;
                    else if ((mid + 1) > topOne) val2 = BIG;
                    else {
                        int p = topC.position(mid + 1);
                        lll sm = topS.query(p);
                        val2 = sm - 1LL * (mid + 1) * (mid + 2) / 2;
                    }
                    if (!rem2) val2 += 0;
                    else if (rem2 > botOne) val2 += BIG;
                    else {
                        int p = botC.position(rem2);
                        lll sm = botS.query(p);
                        val2 += sm - 1LL * rem2 * (rem2 + 1) / 2;
                    }

                    if (val1 < val2) high = mid;
                    else low = mid + 1;
                }

                int rem = l - low + 1;
                if (!low) output = 0;
                else if (low > topOne) output = BIG;
                else {
                    int p = topC.position(low);
                    lll sm = topS.query(p);
                    output = sm - 1LL * low * (low + 1) / 2;
                }
                if (!rem) output += 0;
                else if (rem > botOne) output += BIG;
                else {
                    int p = botC.position(rem);
                    lll sm = botS.query(p);
                    output += sm - 1LL * rem * (rem + 1) / 2;
                }
                if (output >= BIG / 2) output = -1;
            }
            cout << output << endl;
        }
    }

    return 0;
}
