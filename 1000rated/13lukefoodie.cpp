#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,x;
	    cin>>n>>x;
	    vector<long long>arr(n);
	    for(auto &it:arr)cin>>it;
	    int ans=0;
	    long long left=0;
	    long long right=1e9+1;
	    for(int i=0;i<n;i++)
	    {
	        if(left>(arr[i]+x)|| right<(arr[i]-x))
	        {
	            ans++;
	            left=arr[i]-x;
	            right=arr[i]+x;
	        }
	        else{
	            left=max(left,arr[i]-x);
	            right=min(right,arr[i]+x);
	        }
	    }
	    cout<<ans<<endl;
	    
	}

}
