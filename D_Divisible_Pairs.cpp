#include <bits/stdc++.h>
using namespace std; 
#define int long long

signed main() {
    int t=1;
    cin >> t;
    while(t--){
      int n,x,y;
      cin >>n >>  x >> y;
      vector<int>nums(n);
      for(int i =0;i<n;i++)cin >> nums[i];
    map<pair<int,int>,int>mp;
    map<pair<int,int>,bool>vis;
     for(int i =0;i<n;i++){
    int xx = nums[i]%x;
    int yy = nums[i]%y;
    mp[{xx,yy}]++;
    vis[{xx,yy}]=false;
     }

     int mx =0;
     for(auto it:mp){
       

        int xx = it.first.first;
        int yy = it.first.second;
        int s = xx;
         if(vis[{xx,yy}])continue;
         xx= (x-xx)%x;
        if(mp.find({xx,yy})!=mp.end()){
            if(s==xx){
                mx += (mp[{s,yy}]*(mp[{xx,yy}]-1))/2;
              
                vis[{xx,yy}]=true;
            }else{
            // mx+=mp[{xx,yy}];
            mx += (mp[{s,yy}]*mp[{xx,yy}]);
            vis[{xx,yy}]=true;}
        }
     }
     cout << mx << endl;
    }
}