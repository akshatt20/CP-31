#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
 ll n;
 cin>>n;
 vector<ll> arr(n);
 for(auto &it:arr)cin>>it;
 ll sum=0;
 ll maxi=0;
 ll maxIndex=-1;
 vector<ll> ans;
 for(int i=0;i<n;i++)
 {
     sum+=arr[i];
     if(arr[i]>maxi)
     {
         maxi=arr[i];
         maxIndex=i;
     }
 }
 ll maxiS=0;
 for(int i=0;i<n;i++)
 {
     if(i!=maxIndex)
     {
         if(arr[i]>maxiS) maxiS=arr[i];
         ll val=sum-arr[i]-maxi;
         if(val==maxi)ans.push_back(i+1);
     }
 }
 ll last=sum-maxi-maxiS;
 if(last==maxiS)ans.push_back(maxIndex+1);
 cout<<ans.size()<<endl;
 for(auto &it:ans)cout<<it<<" ";
 cout<<endl;

}