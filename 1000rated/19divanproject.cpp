#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    vector<pair<long long,long long>> arr(n+1);
    for(long long i=1;i<=n;i++)
    {
        cin>>arr[i].first;
        arr[i].second=i;
    }
sort(arr.begin() + 1, arr.end(), greater<pair<long long, long long>>());
    vector<long long> ans(n+1);
    int pos=1;
    long long total=0;
    for(long long i=1;i<=n;i++)
    {  total+=(arr[i].first*2*(pos));
        if(i%2)ans[arr[i].second]=pos;
        else 
       { ans[arr[i].second]=(-pos);
           pos++;
       }
    }
    cout<<total<<endl;
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
