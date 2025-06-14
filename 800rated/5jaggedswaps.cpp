#include <bits/stdc++.h>
using namespace std;
// we dont have the power to change the position of first element in the array so if first element is sorted ans is yes else not.


int main() {
   int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        int start=arr[0];
        int end=arr[n-1];
        sort(arr.begin(),arr.end());
        if(arr[0]!=start)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
    return 0;
}