#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;

int solve2(int sum,vector<ll> &dp)
{
    if(sum==0)return 1;
    if(sum<0)return 0;
   if(dp[sum]!=-1)return dp[sum];
    ll ans=0;
    for(int i=1;i<=6;i++)
    {    
           ans=(ans+solve2(sum-i,dp))%mod;
    }
    return dp[sum]=ans;
}

void solve()
{
    ll n;
    cin>>n;
    vector<ll> dp(n+1,-1);
    cout<< solve2(n,dp);
    
   
    
}
int main() {
   solve();
}
