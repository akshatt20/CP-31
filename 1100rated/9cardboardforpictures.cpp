#include <bits/stdc++.h>
using namespace std;

long long solve(vector<long long> &arr,long long mid,long long c)
{
    long long total=0;
    for(int i=0;i<arr.size();i++)
    {
        long long val=arr[i]+2*mid;
        if(val>INT_MAX)return -1;
        val*=val;
        total+=val;
        if(total>c)return -1;
    }
    return total;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,c;
	    cin>>n>>c;
	    vector<long long>arr(n);
	    for(auto &it:arr)cin>>it;
	    long long s=1;
	    long long e=1e9;
	    long long ans=1;
	    while(s<=e)
	    {
	        long long mid=s+(e-s)/2;
	        long long square=solve(arr,mid,c);
	        if(square==c)
	        {
	            ans=mid;
	            break;
	        }
	        else if(square==-1)
	        {
	            e=mid-1;
	        }
	        else s=mid+1;
	    }
	    cout<<ans<<endl;
	}
}