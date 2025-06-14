#include <bits/stdc++.h>
using namespace std;
long long solve(vector<long long> &arr,long long k)
{
      long long n=arr.size();
      long long ans=INT_MAX;
     for(int i=0;i<n;i++)
     {
        if(arr[i]%k==0)
        {
            ans=0;
            int j=i;
            if(k==2)arr.erase(arr.begin()+j);
            break;
        }
       else{
           long long val=arr[i]%k;
           if(ans>k-val)ans=k-val;
       }
     }
     return ans;
       
}

int main() {
   int t;
   cin>>t;
   while(t--)
   {
      long long n,k;
      cin>>n>>k;
      vector<long long> arr(n);
      for(auto &it:arr)cin>>it;
      long long res=0;
      res=solve(arr,k);
      if(k==4)
      {
          long long res1=solve(arr,2);
          long long res2=solve(arr,2);
          res=min(res,res1+res2);
      }
      cout<<res<<endl;
      
   }

    return 0;
}