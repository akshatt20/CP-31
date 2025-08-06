#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll xx=n/x;
    ll yy=n/y;
    ll lcmVal= (x*y)/(__gcd(x,y));
    ll lc=n/lcmVal;
    xx-=lc;
    yy-=lc;
    ll ans=0;
    int cnt=1;
    if(xx)
    {
        ll total=(n*(n+1))/2;
        total-=((n-xx)*(n-xx+1))/2;
        ans+=total;
    }
    if(yy)
    {
        ans-=(yy*(yy+1))/2;
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