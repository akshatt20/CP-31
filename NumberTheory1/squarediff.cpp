// Codeforces
#include <bits/stdc++.h>
using namespace std;
bool primeCheck(long long n)
{
    for(long long i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
bool solve(long long a,long long b)
{
    long long first=a-b;
    long long second=a+b;
    if(first==1){
        if(primeCheck(second)){
            return true;
        }
    }
    else if(second==1)
    {
         if(primeCheck(first)){
            return true;
        }
    }
    else{
        return false;
    }
    return false;

}


int main() {
   int t;
   cin>>t;
   while(t--)
   { long long a;
    long long b;
    cin>>a;
    cin>>b;
    bool ans=solve(a,b);
    if(ans){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }}

    return 0;
}