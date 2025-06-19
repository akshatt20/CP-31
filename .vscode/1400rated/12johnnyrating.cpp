#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cal(ll &n)
{
    ll sum=1;
    ll start=1;
    
    while((1LL << start) <=n)
    {
        sum+=(1LL << start);
        start++;
    }
    n=n-(1LL << start-1);
    return sum;
}
void solve()
{
 ll n;
 cin>>n;
 ll ans=0;
 while(n!=0)
 {
     ll value=cal(n);
   //  cout<<n<<" "<<value<<endl;
     ans+=value;
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
