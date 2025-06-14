#include <bits/stdc++.h>
using namespace std;
void solve()
{
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(auto &it:arr)cin>>it;
        long long cnt=1;
        long long maxi=1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i-1])cnt++;
            else {
                maxi=max(maxi,cnt);
                cnt=1;
            }
        }
        maxi=max(maxi,cnt);
       
        long long ans=0;
        long long val=n-maxi;
        ans=ans+val;
        while(val>0)
        {
            ans++;
            val=val-maxi;
            maxi=maxi*2;
        }
        cout<<ans<<endl;
        
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