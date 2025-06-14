#include <bits/stdc++.h>
using namespace std;
  const int N=1e6+1;
    vector<long long> diff(N+1,0);
int main() {
  
   long long n;
   cin>>n;
   long long c;
   cin>>c;
   vector<long long> start(n);
   vector<long long> end(n);
   vector<long long> cost(n);
   for(long long i=0;i<n;i++)
   {
       cin>>start[i]>>end[i]>>cost[i];
   }

   for(long long i=0;i<n;i++)
   {
       diff[start[i]]+=cost[i];
       if (end[i] + 1 <= N) {
    diff[end[i] + 1] -= cost[i];
}

   }
   for(long long i=1;i<N;i++)
   {
       diff[i]+=diff[i-1];
   }
   long long ans=0;
   for(long long i=0;i<N;i++)
   {
       ans=ans+min(c,diff[i]);
   }
   cout<<ans;

    return 0;
}