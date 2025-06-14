#include <bits/stdc++.h>
using namespace std;
void solve()
{   
    long long n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<vector<long long>> arr(n+1,vector<long long>(2,0));
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    if(b<k && a<k)
    {
        cout<<0<<endl;
        return;
    }
    long long cost=abs(arr[a][0]-arr[b][0]);
    cost+=abs(arr[a][1]-arr[b][1]);
    //cout<<cost<<endl;
    long long mini=1e12;
    long long mini2=1e12;
    if(a<=k)mini2=0;
    if(b<=k)mini=0;
    long long bx=arr[b][0];
    long long by=arr[b][1];
    long long ax=arr[a][0];
    long long ay=arr[a][1];
    for(int i=1;i<=k;i++)
    {
       long long px=arr[i][0];
       long long py=arr[i][1];
       mini=min(mini,abs(px-bx)+abs(py-by));
       mini2=min(mini2,abs(px-ax)+abs(py-ay));
    }
    cost=min(cost,mini2+mini);
    cout<<cost<<endl;
}   
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}
