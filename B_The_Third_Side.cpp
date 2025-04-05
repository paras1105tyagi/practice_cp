#include <bits/stdc++.h>
using namespace std; 
 
int main() {
    int t=1;
    cin >> t;
    while(t--){
        double l,r,d,u;
        cin >> l >> r >> d >> u;
        double x = sqrt((r*r) + (u*u));
        bool flg = true;
        if( sqrt((l*l) + (u*u))!=x || sqrt((l*l) + (d*d))!=x ||  sqrt((r*r) + (d*d))!=x){
            flg = false;
        }
 
        if(r+l != u+d)flg = false;
        if(flg){
            cout <<"YES"<<endl;
        }else{
            cout <<"NO"<<endl;
        }
    }
}