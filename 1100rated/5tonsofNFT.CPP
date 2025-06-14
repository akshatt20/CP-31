#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for(auto &it:arr)cin>>it;
    long long diff=0;
    vector<long long> prefix(n);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)prefix[i]=prefix[i-1]+arr[i];
    for(int i=1;i<=n;i++)
    {    long long maxi=LLONG_MIN;
    long long mini=LLONG_MAX;
        if(n%i==0)
        { 
            for(int j=i-1;j<n;j=j+i)
            {   
                long long second=prefix[j];
                if(j!=(i-1))second-=prefix[j-i];
                maxi=max(maxi,second);
                mini=min(mini,second);
            }
            diff=max(diff,maxi-mini);
        }
    }
    cout<<diff<<endl;
}   
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}