#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	vector<int> b(m);
	for(auto &it:a)cin>>it;
	for(auto &it:b)cin>>it;
	vector<vector<int>> dp(n+1,vector<int>(m+1,0));
	for(int i=0;i<=n;i++)dp[i][0]=0;
	for(int j=0;j<=m;j++)dp[0][j]=0;
	
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=m;j++)
	    {
	        if(a[i-1]==b[j-1])dp[i][j]=1+dp[i-1][j-1];
	        else
	        {
	            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	        }
	    }
	}
	cout<<dp[n][m]<<endl;
	int i=n;
	int j=m;
	vector<int> ans;
	while(i>0 &&j>0)
	{
	    if(a[i-1]==b[j-1])
	    {
	      ans.push_back(a[i-1]);
	      i--;
	      j--;
	    }
	    else if(dp[i-1][j]>dp[i][j-1])i--;
	    else j--;
	}
	reverse(ans.begin(),ans.end());
	for(auto &it:ans)cout<<it<<" ";
	cout<<endl;
	

}
