#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin>>n;
   vector<ll> arr(n);
   for(auto &it:arr)cin>>it;
   map<int,int> mpp;
   ll ans=0;
   for(int i=0;i<n;i++)mpp[arr[i]-i-1]++;
   for(int i=0;i<n;i++)
   {
     ans+=(mpp[arr[i]-i-1]-1);
     mpp[arr[i]-i-1]--;
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
