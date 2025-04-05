#include <bits/stdc++.h>
using namespace std; 


int main() {
    int t=1;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
       
        vector<vector<int>>col(n,vector<int>(m,0));
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++)cin >> col[i][j];
        }
        unordered_map<int,int>mp;
        int mini = n*m;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                // cout <<"hello....    ";
                if(mp.find(col[i][j])==mp.end()){
                    mp[col[i][j]]=1;
                    continue;}
                

                int dr[] ={-1,0,1,0};
                int dc[]={0,1,0,-1};
                // cout <<"hi....    ";
                for(int k =0;k<=3;k++){
                    int nr = dr[k]+i;
                    int nc = dc[k]+j;
                    // cout <<"here..vvvv.. "<<k<<" ";
                    // cout << nr <<" "<< nc << endl;
                    if(nr>=0 && nr<n && nc>=0 && nc<m && col[i][j]==col[nr][nc] && mp[col[i][j]]<2){
                        mp[col[i][j]]++;
                        break;
                    }

                    // cout <<"BYE>>>>>"<<k <<" ";
                }    
                // cout <<"here....yhan ";
            }
        }


        int sum =0;
        for(auto it: mp){
            sum+=it.second;
        }

        for(auto it:mp){
            mini = min(mini,sum-it.second);
        }
        cout << mini << endl;

    }
}