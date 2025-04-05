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
        int n,m;
        cin >> n >> m;
        vector<vector<int>>x(n,vector<int>(m,0));
        for(int i = 0;i<n;i++){
            string s;
            cin >> s;
            
            for(int j = 0;j<m;j++)x[i][j]=s[j]-'0'; 
        }

        if(m==1){
            int cnt = 0;
            for(int i = 0;i<n;i++){
if(x[i][0]==1)cnt++;
            }


            cout << cnt << endl;
            continue;
        }


        int sum = 0;
        int ans = 0;
        for(int i = 0;i<m;i++){
            sum = 0;
            for(int j = 0; j<n;j++){
              sum+=x[j][i];
            }
            // cout << sum<<"...";
            if(sum&1)ans++;
        }
        int sum1 =0,ans1=0;
        for(int i = 0;i<n;i++){
            sum1 = 0;
            for(int j = 0; j<m;j++){
              sum1+=x[i][j];
            }
            // cout << sum<<"...";
            if(sum1&1)ans1++;
        }
        cout << max(ans1,ans) << endl;
    }
}