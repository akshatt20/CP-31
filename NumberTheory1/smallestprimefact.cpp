#include <bits/stdc++.h>
using namespace std;

void countPrimes(int n) {
       
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
               
                for(int j=i*i;j<n;j=j+i)
                { 
                    if(smallestPrimeFactor[j]==j)
                    {
                        smallestPrimeFactor[j]=i;
                    }
                }
            }
        }
        for(int i=2;i<n;i++)
        {
            cout<<smallestPrimeFactor[i]<<endl;
        }
        
    }
int main() {
    
    int n;
    cin>>n;
    countPrimes(n);
    
    return 0;
}
// n*log(logn)        
// used for finding smallest prime factor of every number from 1 till n.
