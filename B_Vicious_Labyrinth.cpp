#include <bits/stdc++.h>
using namespace std; 
#define int long long

signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;

        if(k&1){
            for(int i =1;i<n;i++)cout << n <<" ";
            cout << n-1 <<endl;
        }else{
            for(int i =1;i<n-1;i++)cout << n-1 <<" ";
            cout << n <<" ";
            cout << n-1 << endl;
        }
    }
}