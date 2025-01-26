#include <bits/stdc++.h>
using namespace std; 


int main() {
    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>nums(n);
        for(int i =0;i<n;i++){
            cin >> nums[i];}
            // nums[i]--;}
     
        
    
       bool flg =true;
       for(int i =0;i<n;i++){
         int d = 2 * max(i, n - 1 - i);
      if (nums[i] <= d) {
        flg = false;
        break;
      }
       }
        if(flg){
            cout <<"YES"<<endl;

        }else{
            cout <<"NO"<<endl;
        }

    }
}