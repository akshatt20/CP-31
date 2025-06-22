#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(auto &it:arr)cin>>it;
    ll i=0;
    ll j=n-1;
    ll x=0;
    while(i<j)
    {
        ll first=arr[i];
        ll second=arr[j];
        ll diff=abs(first-second);
        //cout<<diff<<endl;
       //  if(x>diff && diff!=0)x=diff;
       x=__gcd(x,diff);
        i++;
        j--;
    }
    bool flag=true;
     i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]%x != arr[j]%x)
        {
            flag=false;
            break;
        }
        i++;
        j--;
    }
  //  if(!flag)x=1;
    if(x==LLONG_MAX)x=0;
    cout<<x<<endl;
    
    
    
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}
