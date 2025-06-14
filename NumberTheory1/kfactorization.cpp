// CODEFORCES 
#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   int k;
   cin>>k;
   // prime factors nikla lete  h agar k se zyada honge it means can be expressed as a prdouct of k integers 
   vector<int> primeFactors;
   for(int i=2;i*i<=n;i++)
   {
       while(n%i==0)
       {
        primeFactors.push_back(i);
        n/=i;
       }
       
   }
   if(n>1){
           primeFactors.push_back(n);
       }
       int size=primeFactors.size();
       if(size>=k){
           int diff=size-k;
           for(int i=0;i<k-1;i++)
           {
               cout<<primeFactors[i]<<" ";
           } 
           long long last=1;
           for(int j=k-1;j<size;j++)
           { 
               last*=primeFactors[j];
               
           }
           cout<<last;
       }
       else{
           cout<<"-1";
       }

    return 0;
}