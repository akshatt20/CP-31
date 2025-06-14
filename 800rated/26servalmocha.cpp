#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
    cin>>t;
    while(t--)
    { int n;
     cin>>n;
     vector<int> arr(n);
     for(auto &it:arr)cin>>it;
     int g=INT_MAX;
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             int val=__gcd(arr[i],arr[j]);
             g=min(g,val);
         }
     }
     if(g<=2)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
        
    }

    return 0;
}