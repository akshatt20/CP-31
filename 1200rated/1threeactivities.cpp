#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool comp(pair<ll,ll>&a,pair<ll,ll>&b){return a.first>b.first;}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    vector<ll> a(n);
	    vector<ll> b(n);
	    vector<ll> c(n);
	    for(auto &it:a)cin>>it;
	    for(auto &it:b)cin>>it;
	    for(auto &it:c)cin>>it;
	    vector<pair<ll,ll>> aa,bb,cc;
	    for(int i=0;i<n;i++)
	    {
	        aa.push_back({a[i],i});
	        bb.push_back({b[i],i});
	        cc.push_back({c[i],i});
	    }
	    sort(aa.begin(),aa.end(),comp);
	    sort(bb.begin(),bb.end(),comp);
	    sort(cc.begin(),cc.end(),comp);
	   ll ans=0;
	   for(int i=0;i<=2;i++)
	   {
	       for(int j=0;j<=2;j++)
	       {
	           
	           for(int k=0;k<=2;k++)
	           {
	         if(aa[i].second==bb[j].second || aa[i].second==cc[k].second ||bb[j].second==cc[k].second)continue;
	         ll val=aa[i].first+bb[j].first+cc[k].first;
	         ans=max(ans,val);
	           }
	       }
	   }
	   cout<<ans<<endl;
	}

}