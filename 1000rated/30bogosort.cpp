#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin>>n;
  vector<int> arr(n);
  for(auto &it:arr)cin>>it;
  sort(arr.rbegin(),arr.rend());
  for(auto &it:arr)cout<<it<<" ";
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