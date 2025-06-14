#include <bits/stdc++.h>
using namespace std;
void solve()
{
        int n;
        cin>>n;
        vector<int> arr(n);
        for(auto &it:arr)cin>>it;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<mini)mini=arr[i];
            if(arr[i]>maxi)maxi=arr[i];
        }
        if(arr[0]==mini || arr[n-1]==maxi)
        { 
            cout<<maxi-mini<<endl;
            return;
        }
        int maxim=arr[n-1]-arr[0];
      for(int i=0;i<n-1;i++)
      {
          maxim=max(maxim,arr[i]-arr[i+1]);
          
      }
      maxim=max(maxim,arr[n-1]-mini);
      maxim=max(maxim,maxi-arr[0]);
      cout<<maxim<<endl;
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