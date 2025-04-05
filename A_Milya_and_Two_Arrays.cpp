#include <bits/stdc++.h>
using namespace std; 
#define int long long 

signed main() {
    int t=1;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      vector<int>a(n),b(n);
      for(int i =0;i<n;i++)cin >> a[i];
      for(int j =0;j<n;j++)cin >> b[j];


      unordered_set<int>s1,s2;
      for(auto it: a)s1.insert(it);
      for(auto it: b)s2.insert(it);


    vector<int>aa,bb;
    for(auto it:s1)aa.push_back(it);
    for(auto it: s2)bb.push_back(it);    
      map<int,int>mp;
      for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            mp[a[i]+b[j]]++;
        }
      }
      if(mp.size()>=3){
        cout <<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
        
    }
}