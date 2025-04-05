#include <bits/stdc++.h>
using namespace std; 


int main() {
    int t=1;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(y-x==1){
            cout <<"YES"<<endl;
            continue;
        }

        int add =1;
        bool f = false;
        while(x>0){
            x-=9;
            if(x+1==y){
                f=true;
                break;
            }
        }


        if(f){
            cout <<"YES"<<endl;
        }else{
            cout <<"NO"<<endl;
        }
    }
}