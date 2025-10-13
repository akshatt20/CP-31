#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b;
	cin>>a>>b;
	int n=a.length();
	int m=b.length();
	vector<int>prev(m+1);
	for(int j=0;j<=m;j++)prev[j]=j;
	// for(int i=0;i<=n;i++)dp[i][0]=i;
	for(int i=1;i<=n;i++)
	{  vector<int> curr(m+1);
	curr[0] = i;
	    for(int j=1;j<=m;j++)
	    {  
	        if(a[i-1]==b[j-1]) curr[j]=prev[j-1];
	        else{	        
	        int replace=1+prev[j-1];
	        int rem=1+prev[j];
	        int add=1+curr[j-1];
	        curr[j]=min(replace,min(add,rem));}
	        
	    }
	    prev=curr;
	}
	cout<<prev[m]<<endl;

}
