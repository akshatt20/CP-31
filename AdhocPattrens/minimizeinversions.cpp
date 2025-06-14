#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(auto &it:a)cin>>it;
    for(auto &it:b)cin>>it;
    vector<pair<int,int>> ans(n);
    for(int i=0;i<n;i++)
    {
        ans[i].first=a[i];
        ans[i].second=b[i];
    }
    sort(ans.begin(),ans.end());
    for(auto &it:ans)
    {
        cout<<it.first<<" ";
    }
    cout<<endl;
    for(auto &it:ans)
    {
        cout<<it.second<<" ";
    }
    cout<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}
