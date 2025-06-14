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
        for(int i=0;i<n;i++)cin>>arr[i];
        bool flag=true;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<arr[i-1])
            {
                flag=false;
                break;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else
        {
            if(k>1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}