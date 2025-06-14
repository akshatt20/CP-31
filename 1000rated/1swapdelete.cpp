#include <bits/stdc++.h>
using namespace std;
void solve()
{
       string s;
       cin>>s;
       int ones=0;
       int zeroes=0;
       int n=s.size();
       for(int i=0;i<n;i++)
       {
           if(s[i]=='1')ones++;
           else zeroes++;
       }
       if(zeroes==ones)
       {
           cout<<0<<endl;
           return ;
       }
       int ans=0;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='0' && ones>0){ones--;
           ans++;}
           else if(s[i]=='1' && zeroes>0){zeroes--;
               ans++;
           }
           else {
               break;}
       }
       cout<<n-ans<<endl;
   
       
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