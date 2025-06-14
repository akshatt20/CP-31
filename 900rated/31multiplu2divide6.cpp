#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
        cin>>n;
        long long cnt=0;
        if(n==1)
       { cout<<0<<endl;
        return;}
        while(n!=1)
        {
            if(n%6==0)
            {
                n/=6;
                cnt++;
            }
            else if(n%6==3)
            {
                n*=2;
                cnt++;
            }
            else{
                cnt=-1;
                break;
            }
        }
        cout<<cnt<<endl;
        
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