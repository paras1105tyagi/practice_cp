
#include <bits/stdc++.h>
using namespace std; 
#define int long long 
bool is_possible(int x){
    while(x>0){
        if((x%10)==7){
            return true;
        }
        x/=10;
    }
    return false;
}
signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(is_possible(x)){
            cout << 0 << endl;
            continue;
        }
        int add = 0;
        int ans = 100;

        for(int i =0;i<=1e10;i++){
            add = add*10 +9;
            int y =x;
            for(int j =0;j<10;j++){
                y+=add;
            }
        }
    }
}


    for (int i = 0; ; i++) {
        num = num * 10 + 9;
        // debug(num);
        int temp=x;
        for(int j=0;j<10;j++){

            temp+=num;
            // debug(temp);
            if(check(temp)){
                
                ans=min(ans,j+1);
            }
        }
        if(num>1e9){
            break;
        }  // Append another 9
    }
    cout << ans << nline;


}