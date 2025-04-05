#include <bits/stdc++.h>
using namespace std; 
#define int long long 

signed main() {
    int t=1;
    // cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i =0;i<n;i++)cin >> a[i];
        sort(a.begin(),a.end());
        vector<int>g(n,0);

        if(n<=2){
            if(n==1){
                cout << a[0]<<endl;
            }else{
                // if(a[1]%a[0]){
                // cout << a[0]*a[1]<<endl;}
                // else{
                //     cout << a[1]<<endl;
                // }

                cout << (a[0]*a[1])/(__gcd(a[0],a[1]))<<endl;
            }
            continue;
        }
        for(int i = n-2;i>=0;i--){
            g[i]=__gcd(a[i+1],g[i+1]);
        }
        

        int x =0;
        for(int i =0;i<n;i++){
            x = __gcd(x,((a[i]*g[i])/(__gcd(a[i],g[i]))));
        }

        cout << x << endl;
    }
}