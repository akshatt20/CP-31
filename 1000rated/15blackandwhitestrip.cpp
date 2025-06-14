#include <bits/stdc++.h>
using namespace std;
void solve()
{
       int n,k;
       cin>>n>>k;
       vector<char> arr(n);
       for(auto &it:arr)cin>>it;
       int mini=INT_MAX;
       int cnt=0;
       for(int i=0;i<k;i++)
       {
           if(arr[i]=='W')cnt++;
       }
       mini=min(mini,cnt);
       for(int i=k;i<n;i++)
       {
           if(arr[i]=='W')cnt++;
           if(arr[i-k]=='W')cnt--;
           mini=min(mini,cnt);
       }
       cout<<mini<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   solve();
	}

}
