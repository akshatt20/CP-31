#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    vector<int> b(n);
	    for(auto &it:a)cin>>it;
	    for(auto &it:b)cin>>it;
	    
	    unordered_map<int,int> track1;
	    int cnt=1;
	    track1[a[0]]=1;
	    for(int i=1;i<n;i++)
	    {   
	        if(a[i]==a[i-1])
	       { cnt++;
	       }
	       else cnt=1;
	        if(track1.find(a[i])==track1.end())
	        {
	            track1[a[i]]=cnt;
	        }
	        else 
	        {
	            track1[a[i]]=max(track1[a[i]],cnt);
	        }
      
	    }
	     unordered_map<int,int> track2;
	     cnt=1;
	    track2[b[0]]=1;
	    for(int i=1;i<n;i++)
	    {
	        if(b[i]==b[i-1])
	       { cnt++;
	       }
	       else cnt=1;
	       
	        if(track2.find(b[i])==track2.end())
	        {
	            track2[b[i]]=cnt;
	        }
	        else 
	        {
	            track2[b[i]]=max(track2[b[i]],cnt);
	            
	        }
      
	    }
	    int ans=0;
	    for(int i=1;i<=2*n;i++)
	    {
	        int len1=0,len2=0;
	        if(track1.find(i)!=track1.end())len1=track1[i];
	        if(track2.find(i)!=track2.end())len2=track2[i];
	      
	        ans=max(ans,len1+len2);
	    }
	    cout<<ans<<endl;
	}

}
