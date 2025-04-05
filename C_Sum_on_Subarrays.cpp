#include <bits/stdc++.h>
using namespace std; 
#define int long long 


signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        
        vector<int>a(n);
        int j =0;
        int req = (n*(n+1))/2;
        k=req-k;
        
        for(int i =0;i<n;i++){
            j++;
            int diff = req-((((i+1)*(i+2))/2));
            if(diff>0){
                a[i]= -1; 
            }else if(diff <0){
                int r = req - ((i+1)*(i))/2;
                a[i]=i-r;
                 j--;
                break;
            }else{
                a[i]=-1;

            }
        }
        // cout<< j << endl;
        j--;
        for(int i=j;i<n;i++)a[i]=999;
        for(auto it:a)cout << it <<" ";
        cout << endl;
    }
}