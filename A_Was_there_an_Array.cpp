#include <bits/stdc++.h>
using namespace std; 


int main() {
    int t=1;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        // if()
        vector<long long int>b(n-2);

        for(int i =0;i<n-2;i++)cin >> b[i];
        
        bool f =true;
        string s="";
        for(int i =0;i<n-2;i++){
            s+=to_string(b[i]);
        }
        // cout << s << endl;
        if(s.length()<=2){
            cout <<"YES"<<endl;
            continue;
        }
       for(int i = 0;i<=s.length()-3;i++){
        if(s.substr(i,3)=="101"){
            f=false;
            break;
        }
       }
        if(f){
            cout <<"YES"<<endl;
        }else{
            cout <<"NO"<<endl;
        }
    }
}