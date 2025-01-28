#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t = 1;
    while (t--) {
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        int k = k1 + k2;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int j = 0; j < n; j++) cin >> b[j];

        priority_queue<int> pq;
        for (int i = 0; i < n; i++) {
            pq.push(abs(a[i] - b[i]));
        }

        while (k > 0 && !pq.empty()) {
            int top = pq.top();
            pq.pop();
            if (top == 0) {
                k--;
                pq.push(1);
            } else {
                top--;
                k--;
                pq.push(top);
            }
        }

        if (k > 0 && k % 2 == 1) {
            int top = pq.top();
            pq.pop();
            pq.push(abs(top - 1));
        }

        int sum = 0;
        while (!pq.empty()) {
            int t = pq.top();
            pq.pop();
            sum += t * t;
        }
        cout << sum << endl;
    }
}
