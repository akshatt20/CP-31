#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
   ll n;
   cin>>n;
   vector<ll> arr(n);
   for(auto &it:arr)cin>>it;
   vector<int> pos(1002,-1);
   for(int i=0;i<n;i++)pos[arr[i]]=i+1;
  // for(auto &it:pos)cout <<it<<" ";
   int maxi=-1;
   for(int i=1;i<1001;i++)
   {
       if(pos[i]!=-1)
       {
           for(int j=1;j<1001;j++)
           {
               if(pos[j]!=-1)
               {
                   int value=__gcd(i,j);
                 //  cout<<value<<" "<<i<<" "<<j<<endl;
                   if(value==1)
                   {
                       maxi=max(maxi,pos[i]+pos[j]);
                   }
               }
           }
       }
       
   }
   cout<<maxi<<endl;
    
   
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}