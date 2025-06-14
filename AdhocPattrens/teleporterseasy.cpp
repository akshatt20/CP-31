#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,c;
    cin>>n>>c;
    vector<int> arr(n);
    for(auto &it:arr)cin>>it;
    for(int i=0;i<n;i++)
    {
        arr[i]+=(i+1);
    }
    sort(arr.begin(),arr.end());
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=c)
        {
            ans++;
            c-=arr[i];
        }
        else break;
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
