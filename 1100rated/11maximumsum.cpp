#include <bits/stdc++.h>
using namespace std;
void solve()
{   
    long long n,k;
    cin>>n>>k;
    vector<long long> arr(n);
    long long total=0;
    for(auto &it:arr)
    {cin>>it;
    total+=it;}
    sort(arr.begin(),arr.end());
    long long sum=0;
    int j=n-1;
    int num=k;
    while(k>0)
    {
        sum+=arr[j];
        j--;
        k--;
    }
    int l=0;
    long long mini=sum;
    long long val=0;
    for(int i=1;i<=num;i++)
    {
     val+=arr[l]+arr[l+1];
     l+=2;
     sum-=arr[j+1];
    // cout<<sum<<endl;
     j++;
     mini=min(mini,sum+val);
     
    }
   // cout<<mini<<endl;
    cout<<total-mini<<endl;
}   
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
}
