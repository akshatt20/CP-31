#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,s;
    cin>>n>>s;
    vector<int> arr(n);
    for(auto &it:arr)cin>>it;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)sum++;
    }
    if(s>sum)
    {
        cout<<-1<<endl;
        return;
    }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}
