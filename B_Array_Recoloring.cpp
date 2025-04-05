#include <bits/stdc++.h>
using namespace std; 


#define int long long 

signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int>a(n);
        for(int i = 0 ; i < n;i++)cin >> a[i];

        
      
        if(k==1){
            int ans1 = a[0];
            int mx = 0;
            for(int i = 1;i<n;i++)mx=max(mx,a[i]);
            ans1 = ans1+mx;

            int ans2 = a[n-1];
            mx = 0;
            for(int i = 0; i<n-1;i++)mx = max(mx,a[i]);
            ans2+=mx;

            cout << max(ans1,ans2) << endl;
            continue;
        }
        sort(a.rbegin(),a.rend());
        
        int sum = 0;
        for(int i = 0; i<=k;i++)sum+=a[i];

        cout << sum << endl;
    }
}