#include <bits/stdc++.h>
using namespace std;
void solve()
{
   long long x,n;
   cin>>x>>n;
   long long val=0;
   long long cnt=n/4;
   if(n%4==1)
   {
       val=-n;
   }
   else if(n%4==2)
   {
       val=1;
   }
   else if(n%4==3)
   {
       val=n+1;
   }
   if(x%2)val=-val;
   cout<<x+val<<endl;
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