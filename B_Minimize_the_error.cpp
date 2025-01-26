#include <bits/stdc++.h>
using namespace std; 
#define int long long 


signed main() {
    int t=1;
    // cin >> t;
    while(t--){
        int n,k1,k2;
        cin >> n >> k1 >> k2;
        int k = k1+k2;
        vector<int>a(n),b(n);
        for(int i =0;i<n;i++)cin >> a[i];
        for(int j=0;j<n;j++)cin >> b[j];

        vector<int>nums(n);
        for(int i =0;i<n;i++){
            nums[i]=abs(a[i]-b[i]);
        }

        // sort(nums.begin(),nums.end());
        priority_queue<int>pq;
        
        for(int i =0;i<nums.size();i++)pq.push(nums[i]);

        while(k>0 && pq.size()>1){
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            if(first-(second-1)>=k){
                first-=k;
                k=0;
                pq.push(abs(first));
                pq.push(abs(second));
            }else{
                pq.push(abs(second-1));
                pq.push(abs(second));
                k-= (first-(second-1));
            }
        }
        if(k>0){
            int t = pq.top();
            pq.pop();
            t-=k;
            t=abs(t);
            pq.push(t);
        }
        int sum =0;
        while(!pq.empty()){
            int t = pq.top();
            pq.pop();
            sum+= t*t;
        }
        cout << sum << endl;
    }
}