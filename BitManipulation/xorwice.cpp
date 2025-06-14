//  CODEFORCES 800
#include <bits/stdc++.h>
using namespace std;

int main() {
      int t;
    cin>>t;
    while(t--){
        int  a,b;
        cin>>a>>b;
        long long x=0;
        long long result=0;
        long long ans=0;
        int y=a;
        int z=b;
        while(a!=0 && b!=0)
        {  if((a&1) &&( b&1))
        {
            result+=1<<x;
           
        }
        a=a>>1;
        b=b>>1;
        x++;
            
        }
        ans=(y^result)+(z^result);
        cout<<ans<<endl;
    }

    return 0;
}