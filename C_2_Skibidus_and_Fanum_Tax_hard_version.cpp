#include <bits/stdc++.h>
using namespace std; 
#define int long long

signed main() {
    int t=1;
    cin >> t;
    while(t--){
      int n,m;
      cin >> n >> m;
      vector<int>a(n),b(m);
      for(int i =0;i<n;i++)cin >> a[i];
      for(int i =0;i<m;i++)cin >> b[i];
      
      sort(b.begin(),b.end());
      bool flg = true;

      int k = a[n-1];
      for(int i =0;i<m;i++){
        a[n-1]=max(a[n-1],b[i]-k);
      }

      for(int i =n-2;i>=0;i--){
        int end =m-1, start = 0;
        int mx = a[i];
        int mi = INT_MIN;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(b[mid]-a[i] <= a[i+1]){
                mi = max(mi,b[mid]-a[i]);
                // cout <<"HERE...."<< mi << endl;
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        // cout << mi << endl;
        if(max(mx,mi)<=a[i+1]){
            a[i]=max(mx,mi);
        }else{
           if(mx > a[i+1] && mi ==INT_MIN){
                flg = false;
                break;
            } else {
                a[i]= mi;
            }    
           }
      }



      if(flg){
        cout <<"YES"<<endl;
      }else{
        cout <<"NO"<<endl;
      }


    }
}