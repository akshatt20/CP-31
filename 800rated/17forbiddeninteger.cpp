#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
      long long n,k,x;
      cin>>n>>k>>x;
      if(x!=1)
      {
          cout<<"YES"<<endl;
          cout<<n<<endl;
          for(int i=0;i<n;i++)cout<<1<<" ";
          cout<<endl;
      }
      else{
          
          if(n%2==0 && k>1)
          {
              cout<<"YES"<<endl;
              cout<<n/2<<endl;
              for(int i=0;i<n/2;i++)
              {
                  cout<<2<<" ";
              }
              cout<<endl;
          }
          else if(k>2){
               cout<<"YES"<<endl;
               n=n-3;
               cout<<n/2+1<<endl;
               cout<<3<<" ";
               for(int i=0;i<n/2;i++)cout<<2<<" ";
               cout<<endl;
          }
          else{
              cout<<"NO"<<endl;
          }

      }
     
        
    }

    return 0;
}