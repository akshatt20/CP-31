#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin>>n;
    string temp;
    cin>>temp;
    temp.insert(temp.begin(), '1');
    ll ans=0;
    for(int i=1;i*2<=n;i++)
    {
        for(int j=i;j<=n;j=j+i)
        {
            if(temp[j]=='0')
            {
                temp[j]='2';
                ans+=i;
            }
            else if(temp[j]=='1')break;
           
        }
      //   cout<<temp<<" "<<ans<<endl;
        
    }
    int val=n/2;
    for(int i=val;i<=n;i++)
    {
        if(temp[i]=='0')ans+=i;
    }
    cout<<ans<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}
