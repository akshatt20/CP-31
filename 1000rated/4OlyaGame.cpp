#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    //vector<pair<int,int>> ans(n);
	    int minimum=INT_MAX;
	    int mini=INT_MAX;
	    long long sum=0;
	    int rel=0;
	   for(int j=0;j<n;j++)
	    {
	        int m;
	        cin >>m;
	        vector<int> arr(m);
	        int mini1=INT_MAX;
	        int mini2=INT_MAX;
	        for(int i=0;i<m;i++)
	        {
	          cin>>arr[i];
	          if(arr[i]<mini1)
	          {   mini2=mini1;
	              mini1=arr[i];
	          }
	          else if(arr[i]<=mini2)mini2=arr[i];
	          
            }
            if(minimum>mini2)
            {
                minimum=mini2;
            }
            mini=min(mini,mini1);
            sum+=mini2;
   
	    }
	    //cout<<minimum<<endl;
	    sum-=minimum;
	    sum+=mini;
	    cout<<sum<<endl; 
	}

}
