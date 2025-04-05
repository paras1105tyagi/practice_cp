#include <bits/stdc++.h>
using namespace std; 
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update> ordered_set;

#define int long long 

signed main() {
    int t=1;
    cin >> t;
    vector<int>arr(1e7+3,0);
    for(int i=2;i<=1e7;i++){
        if(arr[i]==0){
            for(int j=i*i;j<=1e7;j+=i){
                arr[j]=1;
            }
        }
    }
    
    while(t--){
    int n;
    cin >> n;

    vector<int>ans;
    for(int i = 2; i<=n;i++){
        if(arr[i] == 0)ans.push_back(i);
    }

    int cnt = 0 ;

    for(int i = 0 ; i < ans.size() ; i++){
        cnt += n/ans[i];
    }

        
    cout << cnt << endl;

    }
}