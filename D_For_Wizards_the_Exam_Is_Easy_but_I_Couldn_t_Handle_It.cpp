#include <bits/stdc++.h>
using namespace std; 
#define int long long
signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i =0;i<n;i++)cin >> a[i];
        int l =0,r=0;
        int mx =0;
        for(int i =0;i<n;i++){
            int sum =0;
            for(int j= i+1;j<n;j++){
                if(a[i]>a[j]){
                    sum++;
                }else if(a[i]<a[j]){
                    sum--;
                }

                if(sum>mx){
                    mx =sum;
                    l=i,r=j;
                }
            }

        }
        cout << l+1 << " "<< r+1 << endl;
    }
}