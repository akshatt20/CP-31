#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(auto &it:arr)cin>>it;
    vector<int> ansK(n+1,1);
    for(int i=0;i<30;i++)
    {
        vector<int> factors(n+1);
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]&(1<<i))cnt++;
        }
        for(int j=1;j<=n;j++)
        {
            if(cnt%j==0)factors[j]=1;
        }
        for(int j=1;j<=n;j++)
        {
            ansK[j]=ansK[j] & factors[j];
        }
    }
      for(int j=1;j<=n;j++)
        {
           if(ansK[j])cout<<j<<" ";
           
        }
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
