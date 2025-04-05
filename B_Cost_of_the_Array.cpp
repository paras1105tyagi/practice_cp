#include <bits/stdc++.h>
using namespace std; 

#define int long long 

signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n>>k;
        vector<int>a(n);
        for(int i =0;i<n;i++)cin >> a[i];
     
        bool flg1 =true;
        if(n==k){
            int mx =1;
            for(int i =1;i<n;i+=2){
                if(a[i]!=mx){
                    cout << i <<endl;
                    flg1 =false;
                    break;
                }
                mx++;
            }
            if(flg1){
                cout << k/2 +1 <<endl;

            }
            continue;
        }

        bool flg2 = true;
        for(int i = 1;i<=(n-k+1);i++){
            if(a[i]!=1){
                cout << 1  <<endl;
                flg2 =false;
                break;
            }
        }
         if(flg2){
            cout << 2 << endl;
         }

    }
}