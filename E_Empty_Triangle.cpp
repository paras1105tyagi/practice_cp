// #include <bits/stdc++.h>
// using namespace std; 
// #define int long long

// signed main() {
//     int t=1;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         map<int,int>mp;
//         int r=0;
//         int a =1,b=2,c=3;
//         int aa =a, bb=b,cc=c;
//         bool f = false;
//         for(int i =1;i<=75 ;i++){
//             if(a>n || b>n ||c>n)break;
//           cout << "? "<< a<<" "<< b <<" "<<c << endl;
//           cout.flush();
//           int x =0;
          
//           cin >> x;

//           if(x==-1){
//             f = true;
//             break;
//           }
//           if(x!=0){
//             mp[x]=1;
//             if(mp.size()==3){
//                 auto it = mp.begin();
//                 a = it->first;

//                 ++it;
                
//                 b = it->first;
                
//                 ++it;
                
//                 c = it->first;
//             }else{
//             if(r==0){
//                 a=x;
//                 // b=bb;
//             }else if(r==1){
//                 b=x;
              
//             }else{
//                 c=x;
               
//             }
//         r=(r+1)%3;}
//           }else{
//             a=c+1;
//             b= c+2,c=c+3;
//           }
//         }
//         if(f)continue;
//         cout << "! "<<" ";
//         // for(auto it:mp){
//         //     cout << it.first <<" ";
//         // }
//         cout << a <<" "<< b <<" "<<c ;
//         cout << endl;
//         cout.flush();
//     }
// }

