#include <bits/stdc++.h>
using namespace std; 

int main() {
    int t=1;
    cin >> t;
    while(t--){
        double l,r,d,u;
        cin >> l >> r >> d >> u;
      bool flg = true;
      if(abs(l)!=abs(r) || abs(d)!=abs(u))flg = false;
       r = abs(r);
       l = abs(l);
       d = abs(d);
       u = abs(u);
      if(l!= d && l!=u && r!=d && r!=u)flg=false; 
        if(flg){
            cout <<"Yes"<<endl;
        }else{
            cout <<"No"<<endl;
        }
    }
}