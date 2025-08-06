#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(auto &it:arr)cin>>it;
    if(n==1)
    {
        cout<<1<<endl;
        return ;
    }
    int ans=1;
    int prev=0;
   for(int i=1;i<n;i++)
   {
       prev=arr[i]-arr[i-1];
       if(prev!=0)
       {
           ans++;
           break;
       }
   }
    for(int i=2;i<n;i++)
    {
        int curr=arr[i]-arr[i-1];
        if(curr==0)continue;
        if((curr>0 && prev<0) ||( curr<0 && prev>0))
        {
            ans++;
            prev=curr;
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