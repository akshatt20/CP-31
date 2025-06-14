// codeforces 1400
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,t;
	cin>>s>>t;
	int n=s.length();
	int m=t.length();
	int x=INT_MAX;
	int y=INT_MAX;
	vector<int> count(26,-1);
	for(int i=0;i<m-1;i++)
	{
	    count[t[i]-'a']=i;
	}
	for(int i=1;i<n;i++)
	{
	    if(count[s[i]-'a']!=-1 && (x==INT_MAX|| x+1+m-y>i+1+m-count[s[i]-'a']))
	    {
	        x=i;
	        y=count[s[i]-'a'];
	    }
	}
	if(x==INT_MAX)cout<<-1<<endl;
	else 
	{
	    cout<<s.substr(0,x)<<t.substr(y)<<endl;
	}
	
	

}
