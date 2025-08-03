#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main() {
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(auto &it:arr)cin>>it;
    vector<ll> prefix(n);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    ld sum=prefix[k-1];
    for(int i=k;i<n;i++)
    {
        ld val=prefix[i]-prefix[i-k];
        sum+=val;
    }
    sum/=(n-k+1);
    cout<<fixed<<setprecision(10)<<sum<<endl;
}