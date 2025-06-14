// CODEFORCES 1600
#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
long long gcd(long long a, long long b)
{
    if(b==0){
        return a;
    }
    return gcd(b%a,a);
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {long long n;
    cin>>n; 
    long long result=0;
    int i=2;
    long long lcm=1;
    while(lcm<=n){
        long long a=n/lcm;
        lcm=(lcm/(gcd(lcm,i)))*i;
        long long b=n/lcm;
        long long v=((a-b)*i)%mod;
        result=(result+v)%mod;
        i++;
    }
        cout<<result<<endl;
    }

    return 0;
}