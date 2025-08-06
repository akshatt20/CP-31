#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
   ll n,l,r;
   cin>>n>>l>>r;
   vector<ll> ans;
   for(int i=1;i<=n;i++)
   {
       ll val=(l+i-1)/i;
       val*=i;
       if(val>r)
       {
           cout<<"NO"<<endl;
           return;
       }
       ans.push_back(val);
   }
   cout<<"YES"<<endl;
   for(auto &it:ans)cout<<it<<" ";
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