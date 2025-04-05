#include <bits/stdc++.h>
using namespace std; 
#define int long long

signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        if((abs(n-m)>k) || ((n<k)&&(m<k))){
            cout << -1 << endl;
            continue;
        }
        
        string ans ="";
        int cnt =0;
        bool flg =true;
        int one =0, x =0, zero =0,gp =0;
        if(n<m){
            one =  (m+k-1)/k;
            x = one;
            zero = (n+x-1)/x;
            gp = one;
        }else{
            zero = (n+k-1)/k;
            x=zero;
            one = (m+x-1)/x;
            gp = zero;
        }

        int cnt_one =0, cnt_zero =0;
        int i =0,j=0;
        bool f1 =true,f2 =true;
        while(true){
            if( one>zero){
                j = min(k, m- cnt_one);
                while(j>0){
                    cnt_one++;
                     ans+='1';
                     j--;
                }
                i = min(zero,(n-cnt_zero)/gp);
                while(i>0){
                    cnt_zero++;
                     ans+='0';
                     i--;
                }

                if(cnt_one == m && cnt_zero ==n)break;
            }else{
                j = min(k, m- cnt_zero);
                while(j>0){
                    cnt_zero++;
                     ans+='0';
                     j--;
                }
                i = min(one,(n-cnt_one)/gp);
                while(i>0){
                    cnt_one++;
                     ans+='1';
                     i--;
                }

                if(cnt_one == m && cnt_zero ==n)break;
            }
        }


      
        cout << ans << endl;
    }
}