#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    vector<int> a(n);
	    vector<int> b(n);
	    for(auto &it:a)cin>>it;
	    for(auto &it:b)cin>>it;
	    vector<long long> track(n);
	    sort(a.begin(),a.end());
	    sort(b.begin(),b.end());
	    // after sorting 
	    int j=0;
	    for(int i=0;i<n;i++)
	    {
	        while(j!=n && a[j]<=b[i])
	        {
	            j++;
	        }
	        if(j!=n){
	            track[i]=n-j;
	        }
	    }
	    const int mod=1e9+7;
	    long long ans=1;
	    sort(track.begin(),track.end());

	    for(int i=0;i<n;i++)
	    {
	        ans=((ans%mod)*(track[i]-i)%mod)%mod;
	    }
	    cout<<ans<<endl;

	}

}