#include <bits/stdc++.h>
using namespace std;
long long solve(int cnt,int k)
{  if(cnt<k)return 0;
    long long val=cnt-k+1;
    return (val*(val+1))/2;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,k,q;
	    cin>>n>>k>>q;
	    vector<long long> arr(n);
	    for(auto &it:arr)cin>>it;
	    long long ans=0;
	    int cnt=0;
	    for(int i=0;i<n;i++)
	    {
	      if(arr[i]<=q)cnt++;
	      else{
	          ans+=solve(cnt,k);
	          cnt=0;
	      }
	    }
	    ans+=solve(cnt,k);
	    cout<<ans<<endl;
	}

}
