#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &it:arr)cin>>it;
    map<int,int> track;
    for(int i=0;i<n;i++)track[arr[i]]++;
    bool flag=false;
    for(auto &it:track)
    {
        if(it.second>1)flag=true;
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}
