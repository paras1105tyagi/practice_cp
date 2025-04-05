#include <bits/stdc++.h>
using namespace std; 


int main() {
    int t=1;
    // cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long double>a(n),b(n);
        for(int i =0;i<n;i++)cin >> a[i];
        for(int i =0;i<n;i++)cin >> b[i];

        unordered_map<long double,int>mp;
        int zero =0;
        for(int i =0;i<n;i++){
            if(a[i]==0){
                if(b[i]==0)zero++;
                continue;}
            mp[(b[i]/a[i])]++;
        }

        int cnt =0;
        for(auto it: mp){
            cnt = max(cnt,it.second);
        }
        cout << cnt+zero << endl;
    }
}