#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
   ll n;
   cin>>n;
   vector<ll> arr(n);
   for(auto &it:arr)cin>>it;
   vector<ll> prefix(n);
   prefix[0]=arr[0];
   for(int i=1;i<n;i++)prefix[i]=prefix[i-1]+arr[i];
   vector<ll> gc(n-1);
   for(int i=0;i<n-1;i++)
   {
       ll first=prefix[i];
       ll second=prefix[n-1]-prefix[i];
       ll gcd= __gcd(first,second);
       gc[i]=gcd;
   }
   ll maxi=1;
    for(int i=0;i<n-1;i++)maxi=max(maxi,gc[i]);
    cout<<maxi<<endl;
    
   
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}
