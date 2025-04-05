#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s,t;
        cin >> s >> t;
        int m = s.length(), n = t.length();
       
        if(m > n){
            for(int i = 0 ; i <m-n;i++){
                t= '1'+t[i];
            }
        }else{
            for(int i = 0; i<n-m;i++){
                s= '1'+s[i];
            }
        }
        
        int cnt = 0;
        for(int i = max(m,n)-1;i>=0;i--){
            if(s[i]==t[i] && s[i]=='1'){
                break;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
}