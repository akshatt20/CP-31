#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
   ll n;
   cin>>n;
   vector<ll> dp(n+1,1e9);
   dp[0]=0;
   for(int i=1;i<=n;i++)
   {
       int x=i;
       while(x!=0)
       {
           int d=x%10;
           x/=10;
           if(i-d>=0)
           {
               dp[i]=min(dp[i],1+dp[i-d]);
           }
       }
   }
   cout<<dp[n]<<endl;
   
}

int main() {
	solve();

}
