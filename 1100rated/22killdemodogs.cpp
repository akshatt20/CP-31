#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
void solve()
{
    ll n;
    cin>>n;
    ll ans=0;
    ans=((((n*(n+1))%mod) *((4*n-1))%mod*337))%mod;
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