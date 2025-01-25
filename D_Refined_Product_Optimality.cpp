#include <bits/stdc++.h>
using namespace std; 
long long int pw(long long int a, long long int b, long long int m) {
    if (b == 0) {
        return a == 0 ? 0 : 1;
    } else if (b == 1) {
        return a % m;
    }
    if (!(b & 1)) {
        long long int temp = pw(a, b / 2, m);
        return ((temp%m) * (temp%m)) % m;
    } else {
        long long int temp = pw(a, (b - 1) / 2, m);
        temp = ((temp%m) *(temp%m)) % m;
        return ((temp%m) *(a%m)) % m;
    }
}

long long int inverse(long long int x, long long int m) {
    return (pw(x, m - 2, m))%m;
}

#define int long long 
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >> q;
        int m =  998244353;
        vector<int>a1(n),b1(n),a2(n),b2(n);
        for(int i =0;i<n;i++){
            cin >> a1[i];
            a2[i]=a1[i];
        }
        for(int i =0;i<n;i++){
            cin >> b1[i];
            b2[i]=b1[i];
        }
        sort(a2.begin(),a2.end());
        sort(b2.begin(),b2.end());

        int pro =1;
        for(int i =0;i<n;i++){
            pro = ((pro%m)*(min(a2[i],b2[i])%m))%m;
        }
        cout << pro <<" ";
        for(int j =1;j<=q;j++){
            int o,i;
            cin >> o >> i;
            i--;
           if(o==1){
            int x = a1[i];
            a1[i]=(a1[i]+1);
           int ind = upper_bound(a2.begin(),a2.end(),x)-a2.begin()-1;
           int div = (min(a2[ind],b2[ind]))%m;
           a2[ind]++;
           int mul = min(a2[ind],b2[ind]);
           pro%=m;
           pro =((pro%m)*(inverse(div,m)%m))%m;
           pro = ((pro%m)*(mul%m))%m;
           cout << pro <<" ";
           }else{
            int x = b1[i];
            b1[i]++;
           int ind = upper_bound(b2.begin(),b2.end(),x)-b2.begin()-1;
           int div = min(a2[ind],b2[ind]);
           b2[ind]++;
           int mul = min(a2[ind],b2[ind]);
           pro%=m;
           pro = ((pro%m)*(inverse(div,m)%m))%m;
           pro =((pro%m)*(mul%m))%m;          
           cout << pro <<" ";
           }
        }
        cout << endl;
    }
}