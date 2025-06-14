#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,k,b,s;
	    cin>>n>>k>>b>>s;
	    long long mini=k*b;
	    long long maxi=mini;
	    maxi=maxi+(k-1)*n;
	    
	    vector<long long> ans(n);
	    if(s<=maxi && s>=mini)
	    {
	       ans[0]=min(s,k*b);
	       s-=ans[0];
	       for(int i=0;i<n && s>0;i++)
	       {
	           if(s>(k-1))
	           {
	               ans[i]+=k-1;
	               s-=(k-1);
	           }
	           else{
	               ans[i]+=s;
	               s=0;
	           }
	       }
	       
	    for(auto &it:ans)cout<<it<<" ";
	    cout<<endl;
	    }
	    else cout<<-1<<endl;
	}
	

}
