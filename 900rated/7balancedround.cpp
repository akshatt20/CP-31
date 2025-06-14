#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<long long> arr(n);
        for(auto &it:arr)cin>>it;
        sort(arr.begin(),arr.end());
        long long cnt=1;
        long long maxi=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]<=k)cnt++;
            else{
                maxi=max(cnt,maxi);
                cnt=1;
            }
        }
        maxi=max(cnt,maxi);
        cout<<arr.size()-maxi<<endl;
        
    }

    return 0;
}