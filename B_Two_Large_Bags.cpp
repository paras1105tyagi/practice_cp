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
        map<int,int>mp;
        for(int i =0;i<n;i++)mp[a[i]]++;
bool flg =true;
        for(int i =0;i<n;i++){
            if(mp[i]==1){
                flg = false;
                break;
            }else if(mp[i]!=0){
                int x = mp[i];
                mp[i]=2;
                mp[i+1]+= x-2;
            }
        }
      
         
        for(auto it:mp){
            if(it.second%2){
                flg = false;
            }
        }
    
        if(flg ){
            cout <<"YES"<<endl;
        }else{
            cout <<"NO"<<endl;
        }
    }
}