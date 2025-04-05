#include <bits/stdc++.h>
using namespace std; 
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update> ordered_set;

#define int long long 

signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s1,s2;
        cin >> s1 >> s2;

        int cnt_1 = 0, cnt_2 = 0;
        if(s2[0]=='0')cnt_2++;
        for(int i = 0; i<s1.length();i++){
        
            if(i&1){
                if(s1[i]=='0'){
                    if(i+1 < s2.length() && s2[i+1]=='0')cnt_2++;
                }else{
                    if((i+1 < s2.length() && s2[i+1]=='1')||(i+1 >=s1.length())){cnt_2--;}

                }
            }else{
                if(s1[i]=='0'){
                    if(i+1 < s2.length() && s2[i+1]=='0')cnt_1++;
                }else{
                    if((i+1 < s2.length() && s2[i+1]=='1') || (i+1 >=s1.length()))cnt_1--;
                }
            }
        
        
        }
        // cout << cnt_1 <<"...."<<cnt_2 <<endl;
        if(cnt_1>=0 && cnt_2 >=0){
            cout <<"YES"<<endl;
        }else{
            cout <<"NO"<<endl;
        }
    }
}