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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt = 0 ;
        for(auto it: s){
            if(it=='U')cnt++;
        }

        if(cnt&1){
            cout << "YES"<<endl;
        }else{
            cout << "NO"<<endl;
        }
    }
}