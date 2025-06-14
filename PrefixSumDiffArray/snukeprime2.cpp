// ATCODER 
// TC-> nlogn
// SC-> n
// optimised approach
#include <bits/stdc++.h>
using namespace std;

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
   set<int> st;
   for(int i=0;i<n;i++)
   {
       st.insert(start[i]);
       st.insert(end[i]+1);
   }
   map<int,int> track;
   int index=0;
   for(auto it:st)
   { 
       track[it]=index;
       index++;
   }
   vector<long long> diff(index+1,0);
   for(int i=0;i<n;i++)
   {
       diff[track[start[i]]]+=cost[i];
       diff[track[end[i]+1]]-=cost[i];
   }
   for(int i=1;i<=index;i++)
   {
       diff[i]=diff[i]+diff[i-1];
   }
   long long ans=0;
   vector<int> a(st.begin(),st.end());
   for(int i=1;i<a.size();i++)
   {
       long long d=a[i]-a[i-1];
       long long mini=min(c,diff[i-1]);
       ans=ans+mini*d;
       
   }
   cout<<ans<<endl;
   



    return 0;
}