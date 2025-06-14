#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    vector<int> ans1(n);
	    vector<int> ans2(n);
	    map<char,int> track;
	    for(int i=0;i<n;i++)
	    {
	        track[s[i]]++;
	        ans1[i]=track.size();
	    }
	    int maxi=track.size();
	    track.clear();
	    for(int i=n-1;i>=0;i--)
	    {
	        track[s[i]]++;
	        ans2[i]+=track.size();
	    }
	    for(int i=0;i<n-1;i++)
	    {
	        maxi=max(maxi,ans1[i]+ans2[i+1]);
	    }
	    
	    cout<<maxi<<endl;
	       
	}

}
