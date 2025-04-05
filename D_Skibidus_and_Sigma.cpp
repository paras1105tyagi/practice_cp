#include <bits/stdc++.h>
using namespace std; 
#define int long long  
// map<int,int>mp;

static bool comp(vector<int>& a, vector<int>& b){
    return (accumulate(a.begin(),a.end(),0LL) > accumulate(b.begin(),b.end(),0LL));
}
signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<vector<int>>mat(n,vector<int>(m,0));
       
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                cin >> mat[i][j];
            }

        // int sum = accumulate(mat[i].begin(),mat[i].end(),0);
        // mp[i]=sum;

        }

        sort(mat.begin(),mat.end(),comp);

        vector<int>a;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                a.push_back(mat[i][j]);
            }
        }

        vector<int>pre(n*m,a[0]);
        for(int i =1;i<n*m;i++){
            pre[i]=a[i]+pre[i-1];
        }

        int ans = accumulate(pre.begin(),pre.end(),0LL);
        
        cout << ans << endl;
    }
}