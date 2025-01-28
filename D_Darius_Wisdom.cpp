#include <bits/stdc++.h>
using namespace std; 
#define int long long 

signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i =0;i<n;i++){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(b.begin(),b.end());
        int pos =-1;
        vector<vector<int>>ind(4);
        for(int i=n-1;i>=0;i--){
        if(a[i]==1&& pos ==-1){
         pos =i;
        }

        if(a[i]==0){
            ind[0].push_back(i);
        }else if(a[i]==1){
            ind[1].push_back(i);
        }else{
            ind[2].push_back(i);
        }
        }

        int k =0;
       
        int cnt =0;
        vector<pair<int,int>>ans;
        for(int i =0;i<4;i++){
            reverse(ind[i].begin(),ind[i].end());
        }
        for(int i =0;i<n;i++){
            if(a[i]==b[i]){
                continue;
            }else{ 
            
                if(a[i]==1){
                    if(i+1==ind[0].back()+1){
                        continue;
                    }
                     cnt++;
                    ans.push_back({i+1,ind[0].back()+1});
                    pos = ind[0].back();
                    continue;
                }

                if(a[i]==2 && b[i]==1){
                    if(i+1==pos+1){
                        continue;
                    }
                     cnt++;
                    ans.push_back({i+1,pos+1});
                    break;
                }

                 cnt++;
                ans.push_back({i+1,pos+1});
                if(b[i]==a[pos]){
                    a[pos]=a[i];
                    continue;
                }else{
                    if(i+1==ind[b[i]].back()+1){
                        continue;
                    }
                    cnt++;
                    ans.push_back({i+1,ind[b[i]].back()+1});
                    a[ind[b[i]].back()]=a[pos];
                    a[pos]=a[i];
                    ind[b[i]].pop_back();
                }
            }
        }

        cout << cnt << endl;
        for(auto it: ans){
            cout << it.first <<" "<< it.second <<" "<<endl;
        }
        // cout << endl;

    }
}