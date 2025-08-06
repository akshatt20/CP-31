#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
   ll n,m;
   cin>>n>>m;
   vector<vector<ll>> arr(m,vector<ll>(n,0));
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
         cin>>arr[j][i];  
       }
   }
   for(int i=0;i<m;i++)
   {
       sort(arr[i].begin(),arr[i].end());
   }
   ll ans=0;
   for(int i=0;i<m;i++)
   { ll val=0;
       for(int j=0;j<n;j++)
       {
           val-=(arr[i][j]*(n-1-j));
           val+=(arr[i][j]*j);
       }
       ans+=val;
   }
   cout<<ans<<endl;

}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}