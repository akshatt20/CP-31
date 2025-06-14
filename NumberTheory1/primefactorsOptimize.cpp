#include <bits/stdc++.h>
using namespace std;

vector<int> countPrimes(int n) {
        vector<int> smallestPrimeFactor(n+1);
        for(int i=2;i<=n;i++)
        { 
            smallestPrimeFactor[i]=i;
        }
        smallestPrimeFactor[0]=smallestPrimeFactor[1]=0;
        for(int i=2;i*i<=n;i++)
        {
            if(smallestPrimeFactor[i]==i)
            {
               
                for(int j=i*i;j<=n;j=j+i)
                { 
                    if(smallestPrimeFactor[j]==j)
                    {
                        smallestPrimeFactor[j]=i;
                    }
                }
            }
        }
        
        return smallestPrimeFactor;
    }
    void primeFact(int n,vector<int> &spf)
    { 
        while(n>1)
        {
            int i=spf[n];
            cout<<i<<" ";
            n/=i;
        }
        
    }
int main() {
    
    int n;
    cin>>n;
    vector<int> spf=countPrimes(n);
    primeFact(n,spf);
    
    
    return 0;
}
// here after computing once using n*log(logn) 
// for a query TC is logn bcoz in worst case everytime factor is 2 making it to max TC as logn.
