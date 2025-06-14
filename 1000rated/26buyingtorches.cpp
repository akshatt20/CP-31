#include <bits/stdc++.h>
using namespace std;

void solve()
{
  long long x,y,k;
  cin>>x>>y>>k;
  long long ans=k;
  long long req=k*y;
  req+=(k-1);
  long long val=x-1;
  long long r=(req+(x-2))/val;
  ans+=r;
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