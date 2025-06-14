#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   vector<int> sieve(1e6+1,0);
   int n=sieve.size();
   for(int i=2;i*i<n;i++){
       if(!sieve[i])
       {
           for(int j=i*i;j<n;j=j+i)
           {
               sieve[j]=1;
           }
       }
   }
   
   
   while(t--)
   {
       int d;
       cin>>d;
       long long ans=1;
       int temp=0;
       for(int i=d+1;i<n;i++)
       {
           if(!sieve[i])
           {
               ans*=i;
               temp=i;
               break;
           }
       }
        for(int i=temp+d;i<n;i++)
       {
           if(!sieve[i])
           {
               ans*=i;
               break;
           }
       }
       cout<<ans<<endl;
       
   }

    return 0;
}