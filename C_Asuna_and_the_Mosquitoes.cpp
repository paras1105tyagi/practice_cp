#include<bits/stdc++.h>
using namespace std;
 #define int long long 
signed main(){int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0;i<n;i++)cin >> a[i];
    sort(a.begin(),a.end());
    int sum  = accumulate(a.begin(),a.end(),0*1LL);

    int eve = 0, odd = 0;
    for(auto it: a){
        if(it&1){
            odd++;
        }else{
            eve++;
        }
    }
    if(eve == 0 || odd == 0){
        cout << a[n-1]<<endl;
        continue;
    }
    int x = min(odd,eve);
//    if(eve > odd){
//     cout << sum << endl;
//     continue;
//    }

//    if()
x= odd;
    cout << sum - (x-1)<< endl;}
}