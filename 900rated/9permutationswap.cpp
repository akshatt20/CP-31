#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       vector<int> arr(n);
       map<int,int> count;
       for(auto &it:arr)cin>>it;
       for(int i=0;i<n;i++)
       {
          int diff=abs(arr[i]-(i+1));
          count[diff]++;
          
       }
       int k=arr[0]-1;
       for(auto &it:count)
       {
           k=__gcd(k,it.first);
       }
       cout<<k<<endl;
     
        
    }

    return 0;
}