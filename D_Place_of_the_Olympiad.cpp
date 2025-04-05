#include <bits/stdc++.h>
using namespace std; 
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update> ordered_set;

#define int long long 

bool possible(int x, int n, int m , int k){
    
    int cnt = ((m+1)/(x+1))*x;
    cnt += max(m - ((m+1)/(x+1))*(x+1),0*1LL) ;
    cnt=cnt*n;


    return cnt>=k;
}
signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int n,m ,k;
        cin >> n >> m >> k;

        int start = 1, end = k;

        int ans = m;
        while(start <=end){
            int mid = start + (end - start)/2;

            if(possible(mid,n,m,k)){
                ans = mid ;
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }

        cout << ans << endl;
    }
}