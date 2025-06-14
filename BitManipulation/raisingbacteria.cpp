// CODEFORCES 1000
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
    int ans=0;
    while(x!=0)
    {
        int val=x&1;
        x=x>>1;
        ans+=val;
    }
    cout<<ans<<endl;
    

    return 0;
}