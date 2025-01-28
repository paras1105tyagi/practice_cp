#include <bits/stdc++.h>
using namespace std; 
#define int long long 

signed main() {
    int t=1;
    // cin >> t;
    while(t--){
        int n,q;
        cin >> n >> q;
        vector<int>a(n);
        for(int i =0;i<n;i++)cin >> a[i];
 
        vector<int>dp(n+6,0);
        for(int i =1;i<n;i++){
            if(a[i-1]>=a[i]){
                dp[i]=1+dp[i-1];
            }else{
                dp[i]=dp[i-1];
            }
        }

        while(q--){
            int x,y;
            cin >> x >> y;
            x--;
            y--;
            int len = y-x+1;

            int rem = dp[y]-dp[x];
            rem-=2;
            rem+=1;
            if(rem>=0){
                len-=rem;
            }
            cout << len <<endl;
        }
    }
}