#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        map<int,int> track;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            track[arr[i]]++;
        }
        sort(arr.begin(),arr.end());
        int sum=0;
        bool ans=false;
        for(int i=0;i<n;i++)
        {
           int val=arr[i]-k;
           if(track.find(val)!=track.end()){
               ans=true;
               break;
           }
        }
       if(ans)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       
    }
}