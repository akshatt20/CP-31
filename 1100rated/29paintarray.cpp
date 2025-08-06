#include <bits/stdc++.h>
using namespace std;
void solve()
{
        long long n;
	    cin>>n;
	    vector<long long> arr(n);
	    for(auto &it:arr)cin>>it;
	    long long a1=0,a2=0;
	    for(int i=0;i<n;i+=2)a1=__gcd(a1,arr[i]);
	    for(int i=1;i<n;i+=2)a2=__gcd(a2,arr[i]);
	    bool isPossible=true;
	    
	    for(int i=0;i<n;i+=2)
	    {
	        if(arr[i]%a2==0)
	        {
	            isPossible=false;
	            break;
	        }
	    }
	    if(isPossible)
	    {
	        cout<<a2<<endl;
	        return;
	    }
	      isPossible=true;
	    
	    for(int i=1;i<n;i+=2)
	    {
	        if(arr[i]%a1==0)
	        {
	            isPossible=false;
	            break;
	        }
	    }
	    if(isPossible)
	    {
	        cout<<a1<<endl;
	        return;
	    }
	    cout<<0<<endl;
	    
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}