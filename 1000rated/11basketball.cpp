#include <bits/stdc++.h>
using namespace std;

int main() {
	long long N,D;
	cin>>N>>D;
	vector<long long> power(N);
	for(auto &it:power)cin>>it;
	int i=0;
	int j=N-1;
	long long sum=0;
	int ans=0;
	sort(power.begin(),power.end());
	while(i<=j)
	{   int val=power[j];
	    sum+=val;
	    j--;
	    while(i<=j && sum<=D)
	    {
	        sum+=val;
	        i++;
	    }
	    if(sum>D)ans++;
	    sum=0;
	}
	cout<<ans<<endl;
	

}
