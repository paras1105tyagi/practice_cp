#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(2 * n);
        map<int, int> mp;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        sort(a.begin(), a.end());
        int sum_a = 0, sum_b = 0;
        for (int i = 0; i < n; i++)
            sum_a += a[i];
        for (int i = n; i < 2 * n; i++)
            sum_b += a[i];
        int x = sum_b - sum_a;
        if (mp.find(x) == mp.end())
        {
            cout << x << " ";
            int i = 0, j = 2 * n - 1;
            while (j > i)
            {
                cout << a[j] << " ";
                cout << a[i] << " ";
                j--;
                i++;
            }
            cout << endl;
        }
        else
        {
            int diff = a[(2 * n) - 1];
            int k = n-1;
            sum_a = 0;
            int i = 2 * n - 3;
            vector<int> o, e;
            while (k > 0)
            {
                o.push_back(a[i]);
                k--;
                i--;
            }
            // cout << i <<" ";
            sum_b = 0;
            while (i >= 0)
            {
                e.push_back(a[i]);
                i--;
            }
            vector<int> ans((2 * n) + 1, 0);
            ans[0] = ([(2 * n) - 1]);
            ans[2 * n] = a[2 * n - 2];
            int kk =0,jj=0;
            sum_a = accumulate(e.begin(),e.end(),0);
            sum_b = accumulate(o.begin(),o.end(),0);
            // cout << sum_a <<" "<<sum_b << endl;
            int yy = ans[0] + ans[2*n]+ sum_b - sum_a;
            e.push_back(yy);
            for(int i =1;i<2*n;i++){
                if(i&1){
                    ans[i]=e[kk++];
                }else{
                    ans[i]=o[jj++];
                }
            }

            for (int i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout << endl;
        }
    }
}