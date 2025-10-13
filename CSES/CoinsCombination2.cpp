#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
 
void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> c(n);
    for(auto &it:c)cin>>it;
    vector<ll> prev(x+1,0);
    vector<ll> curr(x+1,0);
    for(int i=0;i<=x;i++)prev[i]=(i%c[0]==0);
    for(int i=1;i<n;i++)
    {
        for(int t=0;t<=x;t++)
        {
            int nonTake=prev[t];
            int take=0;
            if(t>=c[i])
            {
                take=curr[t-c[i]];
            }
            curr[t]=(take+nonTake)%mod;
        }
        prev=curr;
    }
    cout<<prev[x]<<endl;
    
}
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
   solve();
}
