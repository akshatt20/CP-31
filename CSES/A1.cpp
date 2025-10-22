#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cnt=0;

void solve()
{
 ll n;
 cin>>n;
 vector<ll> arr(n);
 for(auto &it:arr)cin>>it;
 ll ans=0;
 ll maxi=0;
 if(n==1)
 {
     cout << "Case #" << cnt << ": " << 0 << endl;
     return;
 }
 for(int i=1;i<n;i++)
 {
     ll val=abs(arr[i]-arr[i-1]);
     maxi=max(maxi,val);
 }
 ans=maxi;
 cout << "Case #" << cnt << ": " << ans << endl;
 cnt++;
 
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}
