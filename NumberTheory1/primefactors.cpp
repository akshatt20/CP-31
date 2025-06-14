    #include <iostream>
#include <bits/stdc++.h>
using namespace std;
// here we is udes the concept that if d*d<=N is not satisifed and N>1 it means that d=N;
// TC is root n
void solve()
{
    int n;
    cin>>n;
    vector <int> divisors;
    for(int i=2;i*i<=n;i++)
    { 
        while(n%i==0)
    {
        divisors.push_back(i);
        n/=i;
    }
   
    
    }
     if(n>1)
    {
        divisors.push_back(n);
    }
   
    
    for(auto it:divisors)
    {
        cout<<it<<" ";
    }

    
}
int main()
{ 
    solve();
    return 0;

}