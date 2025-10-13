#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;

ll solve2(vector<vector<char>> &grid,vector<vector<ll>> &dp,int i,int j,int n)
{
    if(i>=n || j>=n )return 0;
    if(grid[i][j]=='*')return 0;
    if(i==(n-1) && j==(n-1))return 1;
    if(dp[i][j]!=-1)return dp[i][j];
    ll right=solve2(grid,dp,i+1,j,n);
    ll down=solve2(grid,dp,i,j+1,n);
    return dp[i][j]=(right+down)%mod;
}

void solve()
{
 ll n;
 cin>>n;
 vector<vector<char>> grid(n,vector<char>(n));
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<n;j++)
     {
       cin>>grid[i][j];   
     }
 }
 vector<vector<ll>> dp(n,vector<ll>(n,-1));
 ll ans=solve2(grid,dp,0,0,n);
 cout<<ans<<endl;
 
 
 
}

int main() {
	solve();
}
