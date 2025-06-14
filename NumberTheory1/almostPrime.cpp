
// CODEFORCES 900
#include <bits/stdc++.h>
using namespace std;
vector<int> sieve(int n)
{
    vector<int> divisors(n+1);
    divisors[0]=divisors[1]=0;
    for(int i=2;i<=n;i++)
    {
        divisors[i]=i;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(divisors[i]==i)
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                if(divisors[j]==j)
                {
                    divisors[j]=i;
                }
            }
        }
    }
    return divisors;
    
}
bool primeFactors(int n,vector<int> &ans)
{ int cnt=0;
int i=0;
int j=i;
while(n>1)
{
    int i=ans[n];
    if(j!=i){
        cnt++;
    }
    j=i;
    n/=i;
}
if(cnt==2)
{
    return true;
}
else{
    return false;
}
    
}
int main() { 
    int n;
    cin>>n;
    vector<int> ans=sieve(n);
    int result=0;
    for(int i=2;i<=n;i++)
    {
        if(primeFactors(i,ans))
        {
            result++;
        }
    }
    cout<<result;
    return 0;
}