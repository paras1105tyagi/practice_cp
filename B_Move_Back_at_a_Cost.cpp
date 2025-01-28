#include <bits/stdc++.h>
using namespace std; 


int main() {
    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n+1,1e9);
         vector<int>b(n,1e9);
        for(int i =1;i<=n;i++){
            cin >> a[i];
            b[i-1]=a[i];}

        sort(b.begin(),b.end());
        vector <int> suf(n + 2, 1e9);
    for (int i = n; i >= 1; i--){
        suf[i] = min(suf[i + 1], a[i]);
    }
        vector<int>ans;
        priority_queue<int,vector<int>,greater<int>>pq;
      int j =0;
        for(int i =1;i<=n;i++){
            bool good = true;
            if(a[i]!=b[j]){
                good = false;
            }else{
                j++;
            }
            if(!pq.empty()&& pq.top()<a[i]){
                good = false;
            }

            if(good){
                ans.push_back(a[i]);
            }else{
                pq.push(a[i]+1);
            }
        }    

        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }

        for(auto it: ans)cout << it <<" ";
        cout << endl;
    }
}