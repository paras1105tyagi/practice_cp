#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int ans = INT_MIN;
        if (n <= k)
            ans = 0;
        vector<int> pre(a.size(), a[0]);
        for (int i = 1; i < n; i++)
            pre[i] = a[i] + pre[i - 1];


        // int sum = 0;
       
        // int j = n - 1;
        // int ff = x;
        // while (x > 0 && j >= 0)
        // {
        //     sum += a[j];
        //     j--;
        //     x--;
        // }
        
        // if (ff >= n)
        // {
        //     int kk = n - 1;
        //     while (k > 0 && kk>=0)
        //     {
        //         sum -= a[kk];
        //         kk--;
        //         k--;
        //     }
        //     cout << max(ans, sum * (-1)) << endl;
        //     continue;
        // }

        
        // ans = max(ans, pre[j] - sum);
       

        

        // int d = n - 1;
        // while (d >= 0 && j >= 0 && k>0)
        // {

        //     sum -= a[d];
        //     sum += a[j];
        //     j--;
        //     d--;
        //     if (j >= 0)
        //     {
        //         ans = max(ans, pre[j] - sum);
        //     }
        //     else
        //     {
        //         ans = max(ans, sum * (-1));
        //     }
        //     k--;
        // }

        // if(k>0 && d>=0){
        // k--;
        // sum-=a[d];
        // ans = max(ans,sum*(-1));
        // d--;
        // }
        // cout << ans << endl;

         
        int j = n-1;
        int sum =0;
        
        while(x>0 && j>=0){
            sum+=a[j];
           
            x--;
            j--;
        }
        if(j>=0){
            ans = max(ans,pre[j]-sum);
          }else{
            ans = max(ans,sum*(-1));
          }
       int p = n-1;
        while(k>0 && p>=0){
            sum-=a[p];
            if(j>=0){
              sum+=a[j];}

              if(j-1>=0){
                ans = max(ans,pre[j-1]-sum);
              }else{
                ans = max(ans,sum*(-1));
              }
              k--;
              p--;
              j--;
        }

        cout << ans << endl;
    }
}