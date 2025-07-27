#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
 ll n;
 cin>>n;
 vector<ll> arr(n);
 for(auto &it:arr)cin>>it;
 vector<ll> preEven(n,0);
 vector<ll> preOdd(n,0);
 preEven[0]=arr[0];
 vector<ll> diff(n,0);
 diff[0]=arr[0];
 map<ll,ll> mpp;
 mpp[diff[0]]=1;

 for(int i=1;i<n;i++)
 {
     if(i%2)
     {
         preOdd[i]=preOdd[i-1]+arr[i];
         preEven[i]=preEven[i-1];
     }
     else
     {preEven[i]=preEven[i-1]+arr[i];
      preOdd[i]=preOdd[i-1];}
     ll val=preEven[i]-preOdd[i];
     diff[i]=val;
    // cout<<val<<endl;
     if(mpp.find(val)!=mpp.end() || preEven[i]-preOdd[i]==0)
     {
         cout<<"YES"<<endl;
         return;
     }
     mpp[val]++;
 }
 cout<<"NO"<<endl;
 
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}