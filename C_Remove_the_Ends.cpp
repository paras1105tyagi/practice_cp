#include <bits/stdc++.h>
using namespace std; 
#define int long long


signed main() {
    int t=1;
    cin >> t;
    while(t--){
      int n;
      cin >>n;
      vector<int>a(n);
    
      for(int i =0;i<n;i++)cin >> a[i];
      int sum =0;
    bool flg = true;
    int mx =0;
   
    for(int i =0;i<n;i++){
        if(a[i]>0 && flg == false){
            mx = max(mx,sum);
            sum = a[i];
            flg = true;
        }else{
            sum+=abs(a[i]);
            if(a[i]<0){
                flg = false;
            }
        }
    }
    mx = max(mx,sum);
    int pos =0, neg=0;
    for(int i =0;i<n;i++){
        if(a[i]<0){
            neg+=abs(a[i]);
        }else{
            pos+=a[i];
        }
    }
    mx = max({mx,pos,neg});
    cout << mx << endl;
    
      
    }
}
