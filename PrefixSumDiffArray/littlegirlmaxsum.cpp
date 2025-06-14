// CODEFORCES 1500 
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,q;
    cin>>n>>q;
    vector<long long> arr(n);
    for(long long i=0;i<n;i++)cin>>arr[i];
    vector<long long> diff(n+1,0);
    for(long long i=0;i<q;i++)
    {
        long long l,r;
        cin>>l>>r;
        diff[l]+=1;
       if(r!=n) diff[r+1]-=1;
    }
    for(long long i=1;i<=n;i++)
    {
        diff[i]=diff[i]+diff[i-1];
      //  cout<<diff[i]<<endl;
    }
    long long ans=0;
    sort(arr.rbegin(),arr.rend());
    sort(diff.rbegin(),diff.rend());
    for(long long i=0;i<n;i++)
    {  long long val=diff[i]*arr[i];
        ans=ans +val;
    }
    cout<<ans<<endl;
    
    
    

    return 0;
}