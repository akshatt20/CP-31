#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> arr(n);
    for(auto &it:arr)cin>>it;
    sort(arr.begin(),arr.end());
    vector<ll> track;
    for(int i=1;i<n;i++)
    {
        ll diff=arr[i]-arr[i-1];
        if(diff>x)
        {
            track.push_back(diff);
        }
    }
    sort(track.begin(),track.end());
    int m=track.size();
    ll cnt=1;
    for(int i=0;i<m;i++)
    {
        ll d=track[i];
        ll val=(d+x-1)/x;
        val--;
        if(val<=k)k-=val;
        else cnt++;
    }
    cout<<cnt<<endl;


}
