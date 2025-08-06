#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(auto &it:arr)cin>>it;
    sort(arr.begin(),arr.end());
    bool flag=true;
    ll prev=1;
    if(arr[0]!=1)flag=false;
    else
 {   for(int i=1;i<n;i++)
    {
    if(arr[i]<=prev)prev+=arr[i];
    else{
        flag=false;
        break;
    }
    }}
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}