#include <bits/stdc++.h>
using namespace std;

#define int long long

int solve(int x, vector<int>& a){
int r =0, l=0;
int n = a.size();
int sum =0;
int mx=0;
while(r<n){
    sum+=a[r];
    while(sum>x && l<r){
         sum-=a[l];
         l++;
    }

    if(sum==x){
        mx = max(mx,r-l+1);
    }

    r++;}

    return mx;
}
signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

       

        int cnt = 0;
      
        for (auto it : a)
        {
            int x = it;
            if(solve(x,a)>1){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}