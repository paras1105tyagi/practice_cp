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

        vector<int>a=nums;
        int ans = accumulate(nums.begin(),nums.end(),0*1LL);
        while(a.size()>1){
            vector<int>temp;
            for(int i =1;i<a.size();i++){
                temp.push_back(a[i]-a[i-1]);
            }

            int sum = accumulate(temp.begin(),temp.end(),0*1LL);
           if(sum<0){
            for(int i =0;i<temp.size();i++)temp[i]*=-1;
            sum*=-1;}

           ans = max(ans,sum);
           a = temp;
        }
        cout << ans << endl;
    }
}