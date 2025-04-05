#include <bits/stdc++.h>
using namespace std; 
#define int long long 

signed main() {
    int t=1;
    // cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<vector<int>>a(n,vector<int>(m,0));
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++)cin >> a[i][j];
        }


        int ans=0;
        map<int,pair<int,int>>mx,my;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(mx.find(a[i][j])!=mx.end()){
                    ans += abs(((mx[a[i][j]].first)*(i+1)) - mx[a[i][j]].second);
                    mx[a[i][j]].first++;
                    mx[a[i][j]].second+= i+1;
                }else{
                    mx[a[i][j]] ={1,i+1};
                }


               
            }
        }

        for(int j =0;j<m;j++){
            for(int i =0;i<n;i++){
                  if(my.find(a[i][j])!=my.end()){
                    ans += abs(((my[a[i][j]].first)*(j+1)) - my[a[i][j]].second);
                    my[a[i][j]].first++;
                    my[a[i][j]].second+= j+1;
                }else{
                    my[a[i][j]]={1,j+1};
                }
            }
        }

        cout << ans << endl;
    }
}