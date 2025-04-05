#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int i, vector<int>& a, vector<int>& pre, int x, int m) {
    int n = a.size();
    int start = i + 1, end = n - 1;
    int ind = -1;
    if(x<=0){
        return  ((m-1)*(n-i-1))*2;
    }
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (a[mid] >= x) {
            ind = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    if (ind == -1) {
        return 0;
    }

    return  ((pre[n-1]-pre[ind-1])-(x-1)*(n-ind))*2;
}

signed main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int ans = 0;
        vector<int> pre(n);
        pre[0] = a[0];

        for (int i = 1; i < n; i++) pre[i] = pre[i - 1] + a[i];

        for (int i = 0; i < n - 1; i++) {
            int x = m - a[i];
           
            int calci = solve(i, a, pre, x,m);
            ans += calci;
        }

        cout << ans << endl;
    }
}
