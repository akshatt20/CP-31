#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    long long sum=0;
    long long nc=0;
    long long mini=INT_MAX;
    vector<vector<long long>> arr(n,vector<long long>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]<0)nc++;
            sum+=(abs(arr[i][j]));
            mini=min(mini,abs(arr[i][j]));
        }
    }
    if(nc%2)sum-=(2*mini);
    cout<<sum<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	 solve();
	}
}