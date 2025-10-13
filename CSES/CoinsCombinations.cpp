#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;


void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> c(n);
    for(auto &it:c)cin>>it;
    vector<ll> dp(x+1,0);
    dp[0]=1;
    for(int i=1;i<=x;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(c[j]<=i)
            {
                dp[i]=(dp[i]+dp[i-c[j]])%mod;
            }
        }
    }
    if(dp[x]==1e9)cout<<-1<<endl;
    else cout<<dp[x]<<endl;
}
int main() {
   solve();
}
