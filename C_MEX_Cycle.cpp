#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        long long int n, x, y;
        cin >> n >> x >> y;
        if ((y == x + 1) || abs(x - (y % n)) <= 1 || ((x & 1) != (y & 1)))
        {
            bool swap = false;
            if (n & 1)
            {
                for (int i = 0; i < n - 1; i++)
                {
                    if (swap)
                    {
                        cout << 0 << " ";
                    }
                    else
                    {
                        cout << 1 << " ";
                    }
                    swap = !swap;
                }
                cout << 2 << " ";
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (swap)
                    {
                        cout << 0 << " ";
                    }
                    else
                    {
                        cout << 1 << " ";
                    }
                    swap = !swap;
                }
            }
            cout << endl;
            continue;
        }
        // cout<<"Hello"<<endl;
        vector<int> v(n + 1, -1);
        v[x] = 0;
        v[y] = 1;
        v[x + 1] = 2;
        bool swap = false;
        for (int i = x + 2; i < y; i++)
        {
            if (swap)
            {
                v[i] = 0;
            }
            else
            {
                v[i] = 1;
            }
            swap = !swap;
        }
        swap = true;
        for (int i = y + 1; i <= n; i++)
        {
            if (swap)
            {
                v[i] = 0;
            }
            else
            {
                v[i] = 1;
            }
            swap = !swap;
        }
        int last = v[n];
        if (!(n&1) && x == 1)
        {
            v[n] = 2;
        }
        else
        {
            swap = (last != 0);
            for (int i = 1; i < x; i++)
            {
                if ((i == x - 1) && swap)
                {
                    v[i] = 2;
                }
                else if (swap)
                {
                    v[i] = 0;
                }
                else
                {
                    v[i] = 1;
                }
                swap = !swap;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}