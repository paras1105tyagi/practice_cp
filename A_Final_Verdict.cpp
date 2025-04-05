#include <bits/stdc++.h>
using namespace std; 
#define int long long
signed main() {
    int t=1;
    cin >> t;
    while(t--){
      int n,xx;
      cin >> n>>xx;
      vector<int>x(n);

      for(int i = 0 ; i < n;i++)cin >> x[i];

      int sum = accumulate(x.begin(),x.end(),0*1LL);
      if(sum%n){
         cout <<"NO"<<endl;
         continue;
      }
      if(sum/n == xx){
        cout << "YES"<<endl;
      }else{
        cout <<"NO"<<endl;
      }
    }
}