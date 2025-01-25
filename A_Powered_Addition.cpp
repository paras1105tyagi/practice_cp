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

        vector<int>mx(n,nums[0]);
        for(int i = 1;i<n;i++){
            mx[i]=max(mx[i-1],nums[i]);
        }
        // for(auto it: mx){
        //     cout << it <<" ";
        // }
        // cout << endl;
        int diff =0;
        for(int i =0;i<n;i++){
            diff = max(diff,mx[i]-nums[i]);
        }
        // cout << diff << endl;
        int cnt =0;
        int i =0;
        int sum =0;
        while(sum < diff){
            sum += pow(2,i);
            i++;
            cnt++;
        }
        cout << cnt << endl;
    }
}