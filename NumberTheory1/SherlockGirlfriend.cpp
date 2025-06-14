
#include <bits/stdc++.h>
using namespace std;
// only 2 is needed  
// 2 3 4
int sieve[100005];
int main() {    
    int n;
    cin>>n;
    int cnt=0;
    memset(sieve,0,sizeof(sieve));
    for(int i=2;i<=n+1;i++)
    {   if(!sieve[i])
    {
         for(int j=2*i;j<=n+1;j=j+i)
        {
            sieve[j]=1;
        }
    }   
    }

    if(n>2)
    {
        cout<<"2";
    }
    else{
        cout<<"1";
    }
    cout<<endl;
    
   for(int i=2;i<=n+1;i++)
   {
       if(!sieve[i]){
           cout<<"1 ";
       }
       else{
           cout<<"2 ";
       }
   }
   
    return 0;
  
}
// here keep in mind the spaces 