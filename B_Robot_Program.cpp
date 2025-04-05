#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int testcases;
    cin >> testcases;

    while(testcases--){
        int n,x,k;
        cin >> n >> x >> k;
        string s;
        cin >> s;
        int cnt =0;
        int pos = x;
        
        if(x!=0){
        for(int i =0;i<s.length();i++){
            if(s[i]=='L'){
                pos--;
            }else{
                pos++;
            }
            k--;
            if(pos==0)break;
            
        }
    }
        int y = k;
        bool f = false;
        int t =0;
        if(pos ==0 )cnt++;
        if(pos!=0){
            cout << 0 << endl;
            continue;
        }
        for(auto it: s){
            if(it == 'L'){
                pos--;
            }else{
                pos++;
            }
            t++;
            if(pos==0){
                f = true;
                break;
            }
        }
        if(f){
            cnt+= (y)/(t);
        }
cout << cnt << endl;
        

    }
}