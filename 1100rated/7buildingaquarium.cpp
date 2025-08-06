#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<long long> &arr,long long mid,long long x)
{ 
    long long n=arr.size();
    long long cap=0;
    for(int i=0;i<n;i++)
    {
        long long val=mid-arr[i];
        if(val>0)cap+=val;
        if(cap>x)return false; 
    }
     if(cap>x)return false; 
     else return true;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,x;
	    cin>>n>>x;
	    vector<long long> arr(n);
	    for(auto &it:arr)cin>>it;
	    long long s=0;
	    long long e=1e16;
	    long long ans=0;
	    while(s<=e)
	    {
	        long long mid=s+(e-s)/2;
	        if(isPossible(arr,mid,x))
	        {
	            ans=mid;
	            s=mid+1;
	        }
	        else e=mid-1;
	    }
	    cout<<ans<<endl;
	}

}