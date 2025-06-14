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
       int cnt=0;
       int track=0;
       for(int i=0;i<n;i++)
       {
           if(arr[i]!=0)cnt++;
           else{
               if(cnt!=0)
               {
                   cnt=0;
                   track++;
               }
           }
       }
       if(cnt!=0)
               {
                   cnt=0;
                   track++;
               }
       if(track==0)cout<<0<<endl;
       else if(track==1)cout<<1<<endl;
       else cout<<2<<endl;
      
     
       
    }

    return 0;
}