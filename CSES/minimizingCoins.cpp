#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;

// ll solve2(ll index,ll target, vector<vector<ll>> &dp,vector<ll> & arr)
// {
//   if(target==0)return 0;
//   if(target<0 || index<0)return 1e15;
//   if(dp[index][target]!=-1)return dp[index][target];
//   ll nonTake=solve2(index-1,target,dp,arr);
//   ll take=1e15;
//   if(arr[index]<=target)
//   {
//       take=1+solve2(index,target-arr[index],dp,arr);
//   }
//   return dp[index][target]=min(take,nonTake);
// }

void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> c(n);
    for(auto &it:c)cin>>it;
    vector<ll> dp(x+1,1e9);
    dp[0]=0;
    for(int i=1;i<=x;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(c[j]<=i)
            {
                dp[i]=min(dp[i],1+dp[i-c[j]]);
            }
        }
    }
    if(dp[x]==1e9)cout<<-1<<endl;
    else cout<<dp[x]<<endl;
}
int main() {
   solve();
}
