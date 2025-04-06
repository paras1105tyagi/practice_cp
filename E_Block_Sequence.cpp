#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s,t;
        cin >> s >> t;
        int m = s.length(), n = t.length();
        int cnt = 0;
        int ind = 0;
        for(int i = n-1;i>=0;i--){
            if(t[i]=='1'){
                break;
            }
            ind++;
        }

        for(int j = m-ind-1;j>=0;j--){
            if((s[j]=='1')){
                break;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
}