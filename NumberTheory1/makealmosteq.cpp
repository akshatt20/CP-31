// CODEFORCES 1200
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
   int t;
   cin>>t;
   while(t--)
   {
       long long n;
       cin>>n;
       vector<long long> arr(n);
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       long long K=0;
       for(int i=0;i<=57;i++)
       {   
           long long k=(1LL<<i);
           bool flag=true;
           long long  first=-1;
           long long second=-1;
           for(int j=0;j<n;j++)
           {   long long val=arr[j]%k;
               if(first==-1)
               {
                   first=val;
               }
               if(first!=val)
               {
                   if(second==-1){
                       second=val;
                   }
                   if(second!=val)
                   {
                       flag=false;
                       break;
                   }
               }
           }
           if(second==-1)
           {
               flag=false;
           }
           if(flag)
           {
               K=k;
               break;
           }
           
       }
       cout<<K<<endl;
       
   }

    return 0;
}