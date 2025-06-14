// CODEFORCES 1100 
#include <bits/stdc++.h>
using namespace std;

int main() {
    
     int t;
  cin>>t;
  while(t--){
      int n,m;
      cin>>n>>m;
      if(n>m){
          cout<<"NO"<<endl;
      }
      else{
         if(n&1){
              cout<<"YES"<<endl;
             for(int i=0;i<n-1;i++){
                 cout<<"1"<<" ";
             }
             cout<<(m-n+1);
             cout<<endl;
         }
         else{
             if(m&1){
                cout<<"NO"<<endl;
             }
             else{
                  cout<<"YES"<<endl;
                 for(int i=0;i<n-2;i++){
                 cout<<"1"<<" ";
             }
             cout<<(m-n+2)/2<<" ";
             cout<<(m-n+2)/2<<" ";
             cout<<endl;
             }
         }
      }
  }

    return 0;
}