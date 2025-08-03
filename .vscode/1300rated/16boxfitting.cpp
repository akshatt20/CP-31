#include <bits/stdc++.h>
using namespace std;
typedef long ll;

bool isPossible(vector<ll> &arr,ll mid,ll w,map<ll,int> mpp)
{
    ll n=arr.size();
    ll cnt=0;
    while(!mpp.empty())
    {
        ll width=0;
        cnt++;
        for(int i=0;i<n;i++)
        {
           while(mpp.count(arr[i]) && mpp[arr[i]]>0 && width+arr[i]<=w)
           {
               mpp[arr[i]]--;
               if(mpp[arr[i]]==0)mpp.erase(arr[i]);
               width+=arr[i];
           }
           if(width==w)break;
        }
        if(cnt>mid)return false;
    }
    if(cnt>mid)return false;
    return true;
    
}
void solve()
{
 ll n,w;
 cin>>n>>w;
 map<ll,int> mpp;
 for(int i=0;i<n;i++)
 {
     ll val;
     cin>>val;
     mpp[val]++;
 }
 vector<ll> arr;
 for(auto &it:mpp)arr.push_back(it.first);
 sort(arr.rbegin(),arr.rend());
 ll s=1;
 ll e=n;
 ll ans=0;

 while(s<=e)
 {
     ll mid=s+(e-s)/2;
     if(isPossible(arr,mid,w,mpp))
     {  
         ans=mid;
         e=mid-1;
     }
     else s=mid+1;
     
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
