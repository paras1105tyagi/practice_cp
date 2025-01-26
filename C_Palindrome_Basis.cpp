#include <bits/stdc++.h>
using namespace std; 
#define int long long
const int MOD = 1e9 + 7;

bool is_pal(int &n) {
    string s = to_string(n);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}


vector<int> generate_palindromes(int max_n) {
    vector<int> palindromes;
    for (int i = 1; i <= max_n; i++) {
        if (is_pal(i)) {
            palindromes.push_back(i);
        }
    }
    return palindromes;
}

int solve(int n, const vector<int>& palindromes) {
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    
    for (int p : palindromes) {
        for (int j = p; j <= n; j++) {
            dp[j] = (dp[j] + dp[j - p]) % MOD;
        }
    }

    return dp[n];
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    const int MAX_N = 40000;
    vector<int> palindromes = generate_palindromes(MAX_N);

    while (t--) {
        int n;
        cin >> n;
        cout << solve(n, palindromes) << endl;
    }

    return 0;
}
