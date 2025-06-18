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
    int l=0;
    int r=0;
    int total=0;
   while(total<s && r<n)
   {
       total+=arr[r];
       r++;
   }
   int maxi=r-l;
   while(r<n)
   {
       if(arr[r]==1)
       {
           while(arr[l]!=1)l++;
           l++;
           r++;
       }
       else r++;
       maxi=max(maxi,r-l);
   }
   cout<<n-maxi<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}
