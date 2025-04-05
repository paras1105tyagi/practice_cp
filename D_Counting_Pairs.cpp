#include <bits/stdc++.h>
using namespace std; 
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update> ordered_set;

#define int long long 

int lefty(int i, vector<int>& a,  int sum, int x){
    int start = i +1, end = a.size() - 1;
    int ind = -1;
    while(start <=end){
        int mid = start + (end-start)/2;

        if(sum - (a[i]+a[mid])>=x){
            end = mid - 1 ;
        }else{
            ind = mid ;
            start = mid + 1;
        }
    }
    return ind;
}

int righty(int i, vector<int>& a, int sum, int x){
    int start = i +1, end = a.size() - 1;
    int ind = -1;
    while(start <=end){
        int mid = start + (end-start)/2;

        if(sum - (a[i]+a[mid])>=x){
            ind = mid ;
            start = mid + 1;
        }else{
           end = mid - 1;
        }
    }
    return ind;
}

signed main() {
    int t=1;
    cin >> t;
    while(t--){
        int n , x , y;
        cin >> n >> x >> y;
        
        vector<int>a(n);
        for(int i = 0 ; i < n ;i++)cin >> a[i];

        sort(a.begin(),a.end());

        int mx = 0;
        
        int sum = accumulate(a.begin(),a.end(),0*1LL);

        for(int i = 0; i<n-1;i++){
            int left = lefty(i,a,sum,y);
            int right = righty(i,a,sum,x);
            // cout << a[i]<<"->"<< left <<" "<<right <<endl;
            if(left < right)mx+=(right-left)+1;
        }

        cout << mx <<endl;
    }
}