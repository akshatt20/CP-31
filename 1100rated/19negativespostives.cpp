#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(auto &it:arr)cin>>it;
        long long sum=0;
        long long cntN=0;
        long long mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)cntN++;
            sum+=(abs(arr[i]));
            mini=min(mini,abs(arr[i]));
        }
        if(cntN%2!=0)sum-=(2*mini);
        cout<<sum<<endl;
    }

}