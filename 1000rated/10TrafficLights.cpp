#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    char c;
	    cin>>c;
	    string s;
	    cin>>s;
	    char prev='o';
	    int pos=0;
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]==c && prev=='o')
	        {prev=s[i];
	        pos=i;}
	        if(prev!='o' && s[i]=='g')
	        {
	            ans=max(ans,i-pos);
	            prev='o';
	        }
	    }
	    if(prev!='o')
	    {
	        for(int i=0;i<n;i++)
	        {
	            if(s[i]=='g')
	            {
	                int val=i+n-pos;
	                ans=max(ans,val);
	                break;
	            }
	        }
	    }
	    cout<<ans<<endl;
	}

}
