#include <bits/stdc++.h>
using namespace std; 
#define int long long

signed main() {
    int t=1;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      vector<int>a(n);
      for(int i =0;i<n;i++)cin >> a[i];
      
      
      vector<vector<int>>dp(n+6,vector<int>(3,0));
      dp[0][0]=1;
      dp[0][1]=1;
      if(a[0])dp[0][1]=0;
      int m = 998244353;
      for(int i =1;i<n;i++){
        if(a[i]>(i+1)/2){
            dp[i][1]=0;
            dp[i][0] = dp[i-1][1];
        }else{
            if(a[i]>0 && (i<2 || a[i]==a[i-2]+1)){
                dp[i][1]= dp[i-1][0];
            }
            if(a[i]==a[i-1]){
                dp[i][1]+= dp[i-1][1];
            }
            dp[i][0] = dp[i-1][1];

            dp[i][0]%=m;
            dp[i][1]%=m;
        }


      }
      cout << (dp[n-1][0] + dp[n-1][1])%m << endl; 
    }
}