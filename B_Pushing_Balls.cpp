#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            for (int j = 0; j < s.length(); j++)
                a[i][j] = s[j] - '0';
        }

        bool flg = true;
        if (n == 1 && m == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        for (int i = 1; i < n; i++)
        {

            for (int j = 1; j < m; j++)
            {

                if (a[i][j] == 1)
                {
                    bool f1 = true, f2 = true;
                    for (int col = j - 1; col >= 0; col--)
                    {
                        if (a[i][col] != 1)
                        {
                            f1 = false;
                            break;
                        }
                    }

                    for (int col = i - 1; col >= 0; col--)
                    {
                        if (a[col][j] != 1)
                        {
                            f2 = false;
                            break;
                        }
                    }
                    // cout << "["<<i <<","<<j <<"]" << "->"<< f1 <<" "<< f2 << endl; 
                    flg = (f1 || f2);
                    // cout << "["<<i <<","<<j <<"]" << "->"<< f1 <<" "<< f2 << " " <<flg <<  endl;
                   
                }

                if (!flg)
                    break;
            }
            if (!flg)
            break;
        }

        if (flg)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}