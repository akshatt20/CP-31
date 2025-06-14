#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n,q;
   cin>>n>>q;
   vector<long long> arr(n+1);
   arr[0]=1;
   for(long long i=1;i<=n;i++)
   {
       cin>>arr[i];
   }
   vector<long long> prefix(n+1);
   prefix[0]=1;
   for(long long i=1;i<=n;i++)
   {
       prefix[i]=arr[i]+prefix[i-1];
   }
   for(long long i=0;i<q;i++)
   {  
       long long a,b;
       cin>>a>>b;
       cout<<prefix[b]-prefix[a-1]<<endl;
       
   }
    return 0;
}