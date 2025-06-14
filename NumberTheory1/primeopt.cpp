#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// here TC is root n
void solve()
{
    int n;
    cin>>n;
    vector <int> divisors;
    for(int i=1;i*i<=n;i++)
    { 
    
        if(n%i==0)
        {
            divisors.push_back(i);
             if((n/i)!=i)
        {
             divisors.push_back(n/i);
        }
        }
       
        

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