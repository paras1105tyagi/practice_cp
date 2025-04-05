#include <bits/stdc++.h>
using namespace std; 
#define int long long 

int solve(int v, int j, int n, vector<pair<int,int>>& a,vector<pair<char,char>>& b, vector<vector<int>>& dp){
    if(j>=n)return v;
 if(dp[j][v]!=-1)return dp[j][v];
 int add =0,mul=0;
 if(b[j].first=='+'){
     add = a[j].first;}
     else{
     add = (a[j].first-1)*(v);
     }


     if(b[j].second=='+'){
        mul = a[j].second;}
        else{
        mul = (a[j].second-1)*(v);
        }
     int ans =v;
    for(int i = v;i<=(add+mul-v);i++){
        int one = solve(i,j+1,n,a,b,dp)+solve(add+mul-v-i,j+1,n,a,b,dp);
      ans = max(ans,v+one);
    }
    return dp[j][v]=ans;
    

}

signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        vector<pair<int,int>>a;
        vector<pair<char,char>>b;
        for(int i =1;i<=n;i++){
            char ch1;
            cin >> ch1;
            int x ;
            cin >> x;
            char ch2;
            cin >> ch2;
            int y;
            cin >> y;
            // cout << ch1 <<" "<<ch2 <<" "<< x <<" "<< y << endl;
            a.push_back({x,y});
            b.push_back({ch1,ch2});
        }
        vector<vector<int>>dp(36,vector<int>(1e4,-1));
       
        int ans = solve(1,0,n,a,b,dp);
        cout << ans <<endl;
    }
}