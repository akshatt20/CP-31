#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for(auto &it:arr)cin>>it;
    long long cnt=0;
    long long ones=0;
    long long zeroes=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)zeroes++;
        if(arr[i]==1)ones++;
    }
    
    long long val=pow(2,zeroes)*ones;
    cnt+=val;
    cout<<cnt<<endl;
    
    
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