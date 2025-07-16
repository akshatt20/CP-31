#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(auto &it:arr)cin>>it;
    vector<int> colours[k+1];
    for(int i=1;i<=k;i++)colours[i].push_back(0);
    for(int i=0;i<n;i++)
    {
        colours[arr[i]].push_back(i+1);
    }
    for(int i=1;i<=k;i++)colours[i].push_back(n+1);
    priority_queue<int> pq[k+2];
    int ans=INT_MAX;
    for(int i=1;i<=k;i++)
    {
        for(int j=0;j<colours[i].size()-1;j++)
        {
            pq[i].push(colours[i][j+1]-colours[i][j]-1);
        }
        int maxi=pq[i].top();
        pq[i].pop();
         pq[i].push(maxi/2);
        int vall=pq[i].top();
        ans=min(ans,vall);
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