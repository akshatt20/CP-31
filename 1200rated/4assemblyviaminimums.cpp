#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin>>n;
    ll val=n*(n-1)/2;
    vector<ll> arr(val);
    for(auto &it:arr)cin>>it;
    sort(arr.begin(),arr.end());
    if(n==2)
    {
        cout<<arr[0]<<" "<<arr[0]<<" "<<endl;
        return;
    }
    vector<ll> a;
    int i=0;
    int j=0;
  while(i<val)
    {
        a.push_back(arr[i]);
        i+=(n-1-j);
        j++;
    }
    a.push_back(1e9);
    for(auto &it:a)cout<<it<<" ";
    cout<<endl;
    
    
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
	

}