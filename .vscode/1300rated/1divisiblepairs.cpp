#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll> arr(n);
    for(auto &it:arr)cin>>it;
    map<pair<int,int>,int> mpp;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        int f=arr[i]%x;
        int s=arr[i]%y;
        int key= (x-f)%x;
        ans+=mpp[{key,s}];
        mpp[{f,s}]++;
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
