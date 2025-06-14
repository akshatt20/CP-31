#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    map<int,int> track;
    long long pos=1;
    long long m=n;
    while(m>0)
    {
        long long digit=m%10;
        m/=10;
        track[pos]=digit;
        pos++;
    }
    long long mini=20;
    long long cnt=1;
    while(n>0)
    {
        long long digit=n%10;
        n/=10;
        for(auto it:track)
        {
            if(it.first>cnt)
            {
                if((digit==0 && it.second==5)||(digit==0 && it.second==0))
                { long long val=it.first-cnt+(cnt-1);
                    mini=min(mini,val);
                }
                if((digit==5 && it.second==2)||(digit==5 && it.second==7))
                {
                     long long val=it.first-cnt+(cnt-1);
                    mini=min(mini,val);
                }
            }
        }
        cnt++;
    }
    cout<<mini-1<<endl;
    
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