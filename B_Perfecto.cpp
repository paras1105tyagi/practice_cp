#include <bits/stdc++.h>
using namespace std;
#define int long long
bool solve(int x)
{
    int k = (sqrt(x));
    return k * k == x;
}
signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
       int n;
       cin >> n;

       int sum = n*(n+1)/2;

       if(solve(sum)){
        cout << -1 << endl;
        continue;
       }

       sum = 0;
       vector<int>ans;

       for(int i = 1;i<=n;i++){
        sum+=i;
        if(solve(sum)){
            ans.push_back(i+1);
            ans.push_back(i);
            sum+=i+1;
            i++;
        }else{
            ans.push_back(i);

        }



       }


       for(auto it: ans)cout << it <<" ";
       cout << endl;
    }
}
