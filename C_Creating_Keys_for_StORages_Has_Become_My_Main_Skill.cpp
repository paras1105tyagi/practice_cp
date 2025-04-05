#include <bits/stdc++.h>
using namespace std; 

int main() {
    int t=1;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int>a(n,x);

        int aur =0;
       
        for(int i = 0;i<n;i++){
           
            if(((x|i)) > x){
                break;
            }else{
                if((i==n-1) && (aur|i)!=(x)){
                    a[i]=x;
                }else{
                    aur = (aur|i);
                   
                    a[i]=i;
                }
            }
        }
        for(auto it:a)cout << it <<" ";
        cout << endl;
    }
}