// CODEFORCES 
// 1400
#include <bits/stdc++.h>
using namespace std;
int main()
{   const int N=2e5+1;
vector<long long> diff(N,0);// diff array
    long long n,k,q;
    cin>>n>>k>>q;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        diff[l]+=1;
        diff[r+1]-=1;
    }
     vector<long long> prefix(N,0);
   if(diff[0]>=k)prefix[0]=1;
    for(int i=1;i<N;i++)
    {
        diff[i]=diff[i]+diff[i-1];
         if(diff[i]>=k)
       {
           prefix[i]=prefix[i-1]+1;
       }
       else{
           prefix[i]=prefix[i-1];
       }
    }
  

   for(int i=0;i<q;i++)
   {  int a,b;
   cin>>a>>b;
       cout<<prefix[b]-prefix[a-1]<<endl;
   }

    return 0;
}