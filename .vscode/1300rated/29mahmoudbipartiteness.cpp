#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void dfs(int node,vector<vector<int>> &adj,vector<int> &color)
{
   for(auto &it:adj[node])
   {
       if(color[it]==-1)
       {
           color[it]=1-color[node];
           dfs(it,adj,color);
       }
   }
}
int main() {
	int n;
	cin>>n;
	vector<vector<int>> adj(n+1);
	for(int i=0;i<n-1;i++)
	{
	   int u,v;
	   cin>>u>>v;
	   adj[u].push_back(v);
	   adj[v].push_back(u);
	}
	vector<int> color(n+1,-1);
	for(int i=1;i<=n;i++)
	{
	    if(color[i]==-1)
	    { color[i]=0;
	        dfs(i,adj,color);
	    }
	}
	ll first=0,second=0;
	for(int i=1;i<=n;i++)
	{    
	    if(color[i]==0)first++;
	    else second++;
	}
	// cout<<first<<" "<<second<<endl;
	ll total=first*second;
	total-=(n-1);
	cout<<total<<endl;
	

}