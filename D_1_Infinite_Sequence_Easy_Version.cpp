#include <bits/stdc++.h>
using namespace std;
#define int long long

int computeF(int k, vector<int>& pre, int n, map<int, int>& memo) {
    if (k <= n) {
        return pre[k - 1];
    }
    if (memo.find(k) != memo.end()) {
        return memo[k];
    }
    int res = (computeF(k - 1, pre, n, memo) + computeF(k / 2, pre, n, memo)) % 2;
    memo[k] = res;
    return res;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> pre(n);
        pre[0] = a[0];
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] ^ a[i];
        }
        map<int, int> memo;
        int m = l; // since l == r
        if (m <= n) {
            cout << a[m - 1] << '\n';
        } else {
            int k = m / 2;
            int result = computeF(k, pre, n, memo);
            cout << result << '\n';
        }
    }
    return 0;
}