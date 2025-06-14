// CODEFORCES 1300 
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int t;
   cin>>t;
   int n=1e6;
   vector<int> smallestPrimeFactor(n+1);
        for(int i=2;i<=n;i++)
        { 
            smallestPrimeFactor[i]=i;
        }
        smallestPrimeFactor[0]=smallestPrimeFactor[1]=0;
        for(int i=2;i*i<=n;i++)
        {
            if(smallestPrimeFactor[i]==i)
            {
               
                for(int j=i*i;j<n;j=j+i)
                { 
                    if(smallestPrimeFactor[j]==j)
                    {
                        smallestPrimeFactor[j]=i;
                    }
                }
            }
        }
   while(t--)
   {
       int m;
       cin>>m;
       vector<int>arr(m);
       for(int i=0;i<m;i++)
       {
           cin>>arr[i];
       }
       map<int,int> count;
       bool flag=true;
       for(int i=0;i<m;i++)
       {
          int val=arr[i];
          while(val>1)
          {
              count[smallestPrimeFactor[val]]++;
              val/=smallestPrimeFactor[val];
          }
       }
       
       for(auto it:count)
       {
           if(it.second%m!=0)
           { 
              flag=false;
              cout<<"NO"<<endl;
              break;
           }
       }
       if(flag){
           cout<<"YES"<<endl;
       }
   }

    return 0;
}