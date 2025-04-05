#include <bits/stdc++.h>
using namespace std; 
#define int long long

signed main() {
    int t=1;
    cin >> t;
    while(t--){
      int n,m;
      cin >> n >>m;
      vector<int>a(n),b(n);
      for(int i =0;i<n;i++)cin >> a[i];
      for(int i =0;i<n;i++)cin >> b[i];
      
      map<int,int>mp;
      for(int i=0;i<n;i++){
        int c = a[i];
        int r = b[i];
       
      
      for(int j = c-r;j<=c+r;j++){
        int y = sqrt((r*r)-((j-c)*(j-c)));
        y =2*(y+1)-1;
        // cout << y <<endl;
        if(mp.find(j)!=mp.end() && y>mp[j])mp[j]=y;
        if(mp.find(j)==mp.end())mp[j]=y;
    }
      }
    int ans =0;
    for(auto it:mp)ans+=(it.second);
    cout << ans << endl;
    }
}