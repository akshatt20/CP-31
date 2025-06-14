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
      long long diff=INT_MAX;
      for(int i=1;i<n;i++)
      {
          diff=min(diff,arr[i]-arr[i-1]);
      }
     if(diff<0)cout<<0<<endl;
     else {
         diff=diff/2;
         cout<<diff+1<<endl;
     }
        
    }

    return 0;
}