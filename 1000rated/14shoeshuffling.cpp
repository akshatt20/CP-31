#include <bits/stdc++.h>
using namespace std;
void solve()
{
        int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(auto &it:arr)cin>>it;
	    map<int,int> freq;
	    for(int i=0;i<n;i++)freq[arr[i]]++;
	    for(auto &it:freq){
	        if(it.second==1)
	        {
	            cout<<-1<<endl;
	            return;
	        }
	    }
	    vector<int> ans(n);
	    for(int i=0;i<n;i++)ans[i]=i+1;
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]==arr[i-1])swap(ans[i],ans[i-1]);
	    }
        for(auto &it:ans)cout<<it<<" ";
	    cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   solve();
	}

}
