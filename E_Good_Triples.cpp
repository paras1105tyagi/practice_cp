#include <bits/stdc++.h>
using namespace std; 

#define int long long

signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int cnt =1;
        while(n>0){
            int d = n%10;
            n/=10;
            int m = 0;
            for(int i =0;i<d+1;i++){
                for(int j =0;j<d+1;j++){
                    if(d-i-j>=0)m++;
                }
            }
            cnt*=m;
        }

        cout << cnt << endl;
    }
}