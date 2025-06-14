// CODEFORCES
// i==N/i and N should be a prime number 

#include <bits/stdc++.h>
using namespace std;
int main() {
    int N=1000001;
    vector<bool> sieve(N,false);
    for(int i=2;i<N;i++)
    {
        if(!sieve[i])
        {
            for(int j=2*i;j<N;j=j+i)
            {
                sieve[j]=1;
            }
        }
    }
 long long n;
 cin>>n;
 vector<long long> count(n);
 for(int i=0;i<n;i++)
 {
     cin>>count[i];
 }
for(int i=0;i<n;i++)
{   if(count[i]<=3){
    cout<<"NO";
}else
   {
       long long root=sqrt(count[i]);
       if(root*root==count[i] && sieve[root]==0)
       {
           cout<<"YES";
       }
       else{
           cout<<"NO";
       }
   }
    cout<<endl;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

    return 0;
}