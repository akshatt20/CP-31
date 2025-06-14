#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
    cin>>t;
    while(t--)
    {
    long long n;
    cin>>n;
    vector<long long > arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    if(arr[0]==arr[arr.size()-1])cout<<"NO"<<endl;
    else{
        reverse(arr.begin()+1,arr.end());
        cout<<"YES"<<endl;
        for(auto &it:arr)cout<<it<<" ";
        cout<<endl;
    }
    }

    return 0;
}