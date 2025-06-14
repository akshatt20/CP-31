#include <bits/stdc++.h>
using namespace std;

void solve()
{
       long long n,k;
       cin>>n>>k;
       vector<long long>arr(n*k);
       for(auto &it:arr)cin>>it;
       sort(arr.begin(),arr.end());
       long long sum=0;
       long long medianVal=n/2;
       long long start=n*k-1-medianVal;
       for(int i=0;i<k;i++)
       {
           sum+=arr[start];
           start=start-medianVal-1;
       }
       cout<<sum<<endl;
        
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        
    }

    return 0;
}