#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
         vector<long long> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        long long maxi=x-arr[n-1];
        maxi*=2;
        maxi=max(maxi,arr[0]);
        for(int i=1;i<n;i++)
        {
            maxi=max(maxi,arr[i]-arr[i-1]);
        }
        cout<<maxi<<endl;
    }

    return 0;
}