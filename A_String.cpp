#include <bits/stdc++.h>
using namespace std; 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update> ordered_set;

int main() {
    int t=1;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int one =0;
        for(auto it:s)if(it=='1')one++:

        cout << one << endl;
    }
}