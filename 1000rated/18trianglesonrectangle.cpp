#include <bits/stdc++.h>
using namespace std;

void solve()
{
   long long w,h;
   cin>>w>>h;
   long long maxi=0;
   for(int i=0;i<4;i++)
   {  int k;
      cin>>k;
     vector<int> arr(k);
     for(auto &it:arr)cin>>it;
     int diff=arr[arr.size()-1]-arr[0];
     long long val=diff*h;
     if(i>=2)val=diff*w;
     maxi=max(maxi,val);
   }
    cout<<maxi<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
}
