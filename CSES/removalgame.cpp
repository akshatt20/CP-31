#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()

{ll n;
cin >>n;
vector<ll> arr(n);
ll total=0;
for(auto &it:arr)
{
    cin>>it;
    total+=it;
}

vector<vector<ll>> dp(n+1,vector<ll>(n+1,0)); // l->r ka diff cal 
for(int i=0;i<n;i++)dp[i][i]=arr[i];

for(int len=2;len<=n;len++)
{
    for(int i=0;i+len-1<n;i++)
    {  int j=len-1+i;
       dp[i][j]=max(arr[i]-dp[i+1][j],arr[j]-dp[i][j-1]); 
    }
}

ll diff=dp[0][n-1];
ll ans=(total+diff)/2;
cout<<ans<<endl;
}
int main() {
	solve();

}
