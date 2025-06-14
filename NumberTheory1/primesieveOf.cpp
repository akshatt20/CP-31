#include <bits/stdc++.h>
using namespace std;

 int countPrimes(int n) {
       
        int cnt=0;
        vector<bool> prime(n+1,true);
        prime[0]=prime[1]=0;
        for(int i=2;i*i<=n;i++)
        {
            if(prime[i])
            {
               
                for(int j=i*i;j<n;j=j+i)
                {
                    prime[j]=0;
                }
            }
        }
        for(int i=2;i<n;i++)
        {
            if(prime[i])cnt++;
        }
        return cnt;
    }
int main() {
    
    int n;
    cin>>n;
   cout<< countPrimes(n);
    
    return 0;
}
// n*log(logn)        