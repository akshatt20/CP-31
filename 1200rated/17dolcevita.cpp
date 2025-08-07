#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPossible(vector<ll> &arr, ll mid,ll n,ll x)
{  ll ans=0;
ll j=0;
ll sum=0;
for(ll i=0;i<n;i++)sum+=arr[i];
 
 for(ll i=n-1;i>=0;i--)
 {
     if(sum+((i+1)*j)<=x)
     {   ll diff=x-(sum+((i+1)*j));
         ans+=(i+1);
         j++;
       ll val=diff/(i+1);
       ans+=(val*(i+1));
       j+=val;
     }
     sum-=arr[i];
 }
 if(ans>=mid)return true;
 else return false;
}
void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> arr(n);
    for(auto &it:arr)cin>>it;
    sort(arr.begin(),arr.end());
    ll s=0;
    ll e=1e15;
    ll ans=0;
    while(s<=e)
    {
        ll mid=s+(e-s)/2;
        if(isPossible(arr,mid,n,x))
        {
            ans=mid;
            s=mid+1;
        }
        else e=mid-1;
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