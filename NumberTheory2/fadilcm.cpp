// CODEFORCES  1400
#include <bits/stdc++.h>
using namespace std;
bool lcm(long long a,long long b,long long X)
{
    long long lc=(a*b)/__gcd(a,b);
    if(lc==X){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    // Write C++ code here
 long long X;
 cin>>X;
 long long mini=LLONG_MAX;
 long long a=1;
 long long b=X;
 for(long long i=1;i*i<=X;i++)
 {
     if(X%i==0)
     {
         if(i!=X/i)
         {
             long long val=max(i,X/i);
             if(val<mini)
             {   if(lcm(i,X/i,X))
                { mini=val;
                 a=i;
                 b=X/i;}
                 
             }
         }
     }
 }
 cout<<a<<" "<<b;

    return 0;
}