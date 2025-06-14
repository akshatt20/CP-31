#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int n,q;
       cin>>n>>q;
       long long sum=0;
       vector<int> prefix(n+1,0);
       vector<int> arr(n+1);
       for(int i=1;i<=n;i++)
       {cin>>arr[i];
           sum+=arr[i];
          prefix[i]=prefix[i-1]+arr[i];
       }
    
       while(q--)
       {int l,r,k;
       cin>>l>>r>>k;
        long long total=sum;
        int val=(r-l+1);
        total=total-(prefix[r]-prefix[l-1]);
       
        total=total+(val*k);
        if(total%2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       }
     
        
    }

    return 0;
}