#include <bits/stdc++.h>
using namespace std;
void solve()
{
        long long a,b,c;
        cin>>a>>b>>c;
        long long sum=a+c;
        if(sum>=(2*b))
        {
            long long val=sum/(2*b);
            if(val*(2*b)==sum)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
          long long val1=2*b-a;
          long long val2=2*b-c;
          if(val1%c==0 || val2%a==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
        
}
int main() {
    int t;
    cin>>t;
    while(t--)
    { 
       solve();
    }

    return 0;
}