#include <bits/stdc++.h>
using namespace std;
#define INF 1000000000    
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> a;
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == '0')
                a.push_back(i);
        }
        int i = 1;
       
        vector<bool>mp(n+6,true);
        for (auto it : a)
            mp[it] = false;
       
        vector<long long int>cost(n+6,INF);
      
        if(a.size()==n){
            cout <<  n << endl;
            continue;
        }
        while (i <= n)
        {
            int x = i;
            while(x<=n){
                if(mp[x]==false){
                    cost[x]=min(cost[x],i*1LL);
                x+=i;}else{
                    break;
                }               
            }
           
            i++;
        }
       long long int sum =0;
       for(auto it: cost){
        if(it == INF)continue;
       sum+=it;}
       cout << sum << endl;
    }
}