#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b)
{
    if(a.first==b.first)return a.second<b.second;
     return a.first > b.first;
    
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int> arr(n);
	    for(auto &it:arr)cin>>it;
	    vector<pair<int,int>> ans;
	    for(int i=0;i<n;i++)
	    {  
	        int val=arr[i]%k;
	        if(val==0)cout<<i+1<<" ";
	      else ans.push_back({val,i+1});
	    }
	    sort(ans.begin(),ans.end(),comp);
	    for(auto &it:ans)cout<<it.second<<" ";
	    cout<<endl;
	    
	}

}
