#include <bits/stdc++.h>
using namespace std; 
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update> ordered_set;

#define int long long 

signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        if(n==0){
            cout << 0 << endl;
            continue;
        }

        if(n<=x){
            cout << 1 << endl;
            continue;
        }


        if(n%2){
            int sub = x;
        
            if((x%2) == 0)sub-=1;
            n-=sub;
            int ans = 1;
            int div = x;
            if(x&1)div--;

            ans+=n/div;
            if(n%div)ans++;
            cout << ans << endl;
            

        }else{
           
            int div = x;
            if(x&1)div = x-1;

            int ans = n/div;
            if(n%div)ans++;
            cout << ans << endl;

        }
    }
}