#include <bits/stdc++.h>
using namespace std; 


int main() {
    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flg = false;
        int z =0, cnt =0;
       
        for(int i = 0;i<s.length();i++){
          if(s[i]=='1' && s[i+1]=='0')cnt+=2;

          if(s[i]=='1' && i+1>=n)z++;
        }
        if(z>0)cnt+=z;
        cout << cnt << endl;
    }

}