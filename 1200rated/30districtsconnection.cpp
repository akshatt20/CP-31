#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin>>n;
    vector<ll> arr(n);
    for(auto &it:arr)cin>>it;
    vector<pair<int,int>> ans;
    int k=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[0])
        {   k=i;
            ans.push_back({1,i+1});
        }
    }
    if(k==-1)
    {
        cout<<"NO"<<endl;
        return ;
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[0])
        {
            ans.push_back({k+1,i+1});
        }
    }
    cout<<"YES"<<endl;
    for(auto &it:ans)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    
   
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}