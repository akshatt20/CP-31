#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    { 
      long long n;
      cin>>n;
      vector<long long> arr(n);
      for(auto &it:arr)cin>>it;
      long long x=0;
      for(int i=0;i<32;i++)
      { int cnt=0;
          for(int j=0;j<n;j++)
          {
              if(arr[j]&(1<<i))cnt++;
          }
           long long diff=n-cnt;
          if(cnt%2!=0)
          {
             
              if(diff%2!=0)
              {
                  x=-1;
                  break;
              }
              else{
                  x |= (1 << i);

              }
          }
      }
      cout<<x<<endl;
    }

    return 0;
}