// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int interval(long long n)
{
       if(n%2){
           return 1;
       }
       int cnt=0;
       for(long long i=1;i<=n;i++)
       {
           if(n%i==0){
               cnt++;
           }
           else{
               break;
           }
       }
       return cnt;
}
int main() {
   int t;
   cin>>t;

  vector<long long> val(t);
  for(int i=0;i<t;i++)
  {
      cin>>val[i];
  }
  for(int i=0;i<t;i++)
  {
      cout<<interval(val[i]);
      cout<<endl;
  }
       
  
    return 0;
}