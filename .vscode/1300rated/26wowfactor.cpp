#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	string s;
	cin>>s;
	int n=s.size();
	int cnt=0;
	string temp="";
	for(int i=0;i<n;i++)
	{   
	    if(s[i]=='o')
	    {   cnt-=1;
	    while(cnt>0)
	    {
	        temp+='w';
	        cnt--;
	    }
	        temp+=s[i];
	        cnt=0;
	    }
	    else if(s[i]=='v')cnt++;
	}
	cnt-=1;
	 while(cnt>0)
	    {
	        temp+='w';
	        cnt--;
	    }
	    //cout<<temp<<endl;
	    s=temp;
	vector<ll> prefix(n+1);
	vector<ll> suffix(n+1);
	for(ll i=1;i<=n;i++)
	{
	    if(s[i-1]=='w')prefix[i]=1+prefix[i-1];
	    else prefix[i]+=prefix[i-1];
	}
	for(int i=n-1;i>=0;i--)
	{
	    if(s[i]=='w')suffix[i]=1+suffix[i+1];
	    else suffix[i]+=suffix[i+1];
	}
	ll ans=0;
	for(int i=0;i<n;i++)
	{
	    if(s[i]=='o')
	    {
	        ll val=prefix[i]*suffix[i+1];
	        ans+=val;
	    }
	}
	cout<<ans<<endl;
	
}