#include <bits/stdc++.h>
using namespace std; 
#define int long long 

signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>nums(n);
        for(int i =0;i<n;i++)cin >> nums[i];
        map<int,pair<int,int>>mp;

        for(int i =0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()){
            mp[nums[i]]={i,i+1};
            }else{
                mp[nums[i]].first = max(mp[nums[i]].first,i+1 -mp[nums[i]].second-1);
                mp[nums[i]].second =i+1;
            }
        }
        for(auto it: mp){
          mp[it.first].first = max(mp[it.first].first, n - mp[it.first].second);
        }

        // for(auto it: mp){
        //     cout << it.first <<"->"<< it.second.first<<","<<it.second.second << endl;
        // }
        // cout << endl;
        // cout << endl;
        vector<int>ans(n,-1);
        vector<int>final(n,INT_MAX);
        unordered_set<int>st;
        for(int i =0;i<n;i++)st.insert(nums[i]);

        for(auto it: st){
            int x = it;
            int start =1,end = n;
            while(start<=end){
                int mid = start+(end-start)/2;
                if(mp[x].first<mid){
                   final[mid-1]= min(final[mid-1],x);
                  end = mid-1;
                }else{
                start = mid +1;
                }
            }
        }
        int u = INT_MAX;
        for(int i =0;i<n;i++){
         u = min(u,final[i]);
         if(u==INT_MAX){
            final[i]=-1;
         }else{
            final[i]=u;
         }
        }
        for(auto it: final)cout << it <<" ";
        cout << endl;
    }
}