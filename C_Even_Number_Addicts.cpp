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
        vector<int> a(n);
        int eve = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if ((a[i] % 2) == 0)
                eve++;
        }

        if (n == 1)
        {
            if (a[0] % 2)
            {
                cout << "Bob" << endl;
            }
            else
            {
                cout << "Alice" << endl;
            }
            continue;
        }
        if (n == 2)
        {
            if (eve == 1 || eve == 2)
            {
                cout << "Alice" << endl;
            }
            else if (eve == 0)
            {
                cout << "Bob" << endl;
            }
            continue;
        }
        if (eve == n)
        {
            cout << "Alice " << endl;
        }
        else if (eve == 0)
        {

         if((n%2) && (((n+1)/2)&1)){
            cout <<"Bob"<<endl;
         }else{
            cout << "Alice" << endl;
         }
        }


        else if(eve > n-eve){
            cout <<"Alice"<<endl;
        }
        else if ((n-eve) % 2 && (n-eve)>1 )
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
}