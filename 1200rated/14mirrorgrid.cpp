#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char c;
            cin>>c;
            arr[i][j]=c-'0';
        }
    }
   ll ans=0;
    for(int i=0;i<(n+1)/2;i++)
    {
        for(int j=0;j<n/2;j++)
        { int sum=0;
        sum+=arr[i][j];
        sum+=arr[n-1-i][n-1-j];
        sum+=arr[j][n-1-i];
        sum+=arr[n-1-j][i];
        int maxi=max(sum,4-sum);
        ans+=(4-maxi);
            
        }
    }
    cout<<ans<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}