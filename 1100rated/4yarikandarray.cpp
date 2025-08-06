#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(auto &it:arr)cin>>it;
    ll maxi=arr[0];
    for(int i=0;i<n;i++)maxi=max(maxi,arr[i]);
    ll sum=0;
    int prev=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]+sum<=0)
      {  prev=-1;
        sum=0;}
        else if(abs(arr[i])%2==0)
        {
            if(prev==-1 || prev==1)
            {
                prev=0;
                sum+=arr[i];
                maxi=max(sum,maxi);
            }
            else{
                if(arr[i]>0)
                {prev=0;
                sum=arr[i];
                maxi=max(sum,maxi);}
                else
                {
                    prev=-1;
                    sum=0;
                }
            }
        }
        else{
         if(prev==-1 || prev==0)
            {
                prev=1;
                sum+=arr[i];
                maxi=max(sum,maxi);
            }
            else{
                if(arr[i]>0)
                {prev=1;
                sum=arr[i];
                maxi=max(sum,maxi);}
                else{
                    prev=-1;
                    sum=0;
                }
            }
        }
    }
    cout<<maxi<<endl;
   
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}