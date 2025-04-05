#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        int l = -1, r = -1, aa = 0, b = 0;
        int mx = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]] == 1)
            {
                sum += 1;
                if (sum == 1)
                {
                    aa = i + 1, b = i + 1;
                }
                else
                {
                    b = i + 1;
                }
            }
            else
            {
                if (mx < sum)
                {
                    l = aa;
                    r = b;
                    mx = sum;
                    sum = 0;
                }
                sum =0;
            }
        }
        if (mx < sum)
        {
            l = aa;
            r = b;
            mx = sum;
        }
        if (mx == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << l << " " << r << endl;
        }
    }
}