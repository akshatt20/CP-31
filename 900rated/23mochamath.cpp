#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for(auto &it:arr)cin>>it;
    long long ans=arr[0];
    for(int i=1;i<n;i++)
    {
        ans=ans&arr[i];
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