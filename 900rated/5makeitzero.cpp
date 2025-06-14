#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      vector<int> arr(n);
      for(auto &it:arr)cin>>it;
      int k=0;
      if(n%2==0)// even
      { k=2;
      cout<<k<<endl;
      cout<<1<<" "<<n<<endl;
      cout<<1<<" "<<n<<endl;}
      // odd
      else{
           k=4;
      cout<<k<<endl;
      cout<<1<<" "<<n<<endl;
      
      cout<<1<<" "<<n-1<<endl;
      
      cout<<n-1<<" "<<n<<endl;
      
      cout<<n-1<<" "<<n<<endl;
     
      }
        
    }

    return 0;
}