#include <bits/stdc++.h>
using namespace std; 
#define int long long

int solve(int i, vector<int>& nums, bool friendd,vector<vector<int>>& dp){ int n = nums.size();
    // base case
    if(i>=n)return 0;
    if(dp[i][friendd]!=-1)return dp[i][friendd];

    if(friendd){
        int add =0;
        if(nums[i]==1)add++;
        int a =add+ solve(i+1,nums,!friendd,dp);
        int b = INT_MAX;
        if(i+1< n ){
            if(nums[i+1]==1)add++;
         b = add+ solve(i+2,nums,!friendd,dp);}
        return dp[i][friendd]=min(a,b);
    }else{
        int a = solve(i+1,nums,!friendd,dp);
        int b = INT_MAX;
        if(i+1<n)b = solve(i+2,nums,!friendd,dp);

        return dp[i][friendd]=min(a,b);


    }
    return 0;   
}
signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>nums(n);
        for(int i =0;i<n;i++)cin >> nums[i];        
        vector<vector<int>>dp(n+6,vector<int>(3,-1));
        int ans = solve(0,nums,true,dp);
        cout << ans << endl;

    }
}