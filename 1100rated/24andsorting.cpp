#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(auto &it:arr)cin>>it;
    ll ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i)
        {
          ans=ans&arr[i];  
        }
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