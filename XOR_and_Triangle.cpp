#include <bits/stdc++.h>
using namespace std; 
#define int long long 

bool solve(int x){
    
  return (x&(x-1))==0;
}
signed main() {
    int t=1;
    cin >> t;
    while(t--){
      int x;
        cin >> x;
        
        if(solve(x)||solve(x+1)){
            cout << -1 << endl;
            continue;
        }

        
        int p = 63 - __builtin_clzll(x);
        cout << (1LL<<p)-1 << endl;
    }
}