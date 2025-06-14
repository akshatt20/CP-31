#include <bits/stdc++.h>
using namespace std;

void solve()
{
       long long n,x;
       cin>>n>>x;
       vector<long long>arr(n);
       for(auto &it:arr)cin>>it;
       long long mini=0;
       long long maxi=0;
       for(int i=0;i<n;i++)
       {
           mini+=arr[i];
           maxi=maxi+ceil((long double)arr[i]/x);
           //cout<<maxi;
       }
       long long ans=0;
       if(mini%x)ans++;
       ans=ans+(mini/x);
       
        cout<<ans<<" "<<maxi<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}