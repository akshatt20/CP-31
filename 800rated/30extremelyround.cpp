#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {int n;
     cin>>n;
     int cnt=0;
     int last=0;
     while(n!=0)
     {
         int digit=n%10;
         n/=10;
         cnt++;
         last=digit;
     }
     int ans=(cnt-1)*9;
     ans+=last;
     cout<<ans<<endl;
    
     }
     
        
    

    return 0;
}