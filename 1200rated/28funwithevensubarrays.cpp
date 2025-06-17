#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(auto &it:arr)cin>>it;
    ll ans=0;
    ll val=arr[n-1];
    ll i=n-1;
    while(i>=0 && arr[i]==val)
    {
      i--;  
    }
    if(i==-1)
    {
        cout<<0<<endl;
        return;
    }
   while(i>=0)
   {
       ans++;
       i=i-(n-i-1);
       while(i>=0 && arr[i]==val)
    {
      i--;  
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
// all the elements will be equal to the last element as elements are assigned from right to left.