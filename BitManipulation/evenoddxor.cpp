#include <bits/stdc++.h>
using namespace std;
void solve(){
      int n;
      cin>>n;
      if(n==3){
          cout<<"1 2 3"<<endl;
          return;
      }
      stack<int> even;
      stack<int> odd;
      int x=2;
      for(int i=0;i<n/2;i++){
          even.push(x);
          x++;
          odd.push(x);
          x++;
      }
     
        if((n/2)&1){
          int top=odd.top();
          odd.pop();
          top^=1;
          int q=1LL<<30;
          top=top^q;
          odd.top()^=q;
          odd.push(top);
      }  
      for(int i=1;i<=n;i++){
          if(i==n &&(n&1)){
              cout<<"0"<<" ";
          }
          else if(i&1){
              cout<<odd.top()<<" ";
              odd.pop();
          }
          else{
               cout<<even.top()<<" ";
              even.pop();
          }
      }
      cout<<endl;
}

int main() {

    int t;
    cin>>t;
    while(t--){
        solve();
      }
      

    return 0;
}