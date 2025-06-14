// CODEFORCES
#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n,m;
    cin>>n>>m;
    if(m==0){
        cout<<n<<endl;
        return;
    }
    long long ans=0;
    for(long long i=0;i<31;i++){
        if((1LL<<i)&n){
            ans=ans+(1LL<<i);
        }
        else {
            if(n<(1LL<<i)){
                long long upper=(1LL<<i)-n;
                if(upper<=m){
                
                    ans=ans+(1LL<<i);
                }
            }
            else
            {long long val=n%(1LL<<(i+1));
            long long sec=abs((1LL<<i )- val);
            sec--;
            long long mini=min(val,sec);
            if(mini<m){
                ans=ans+(1LL<<i);
            }}
        }
    }
    cout<<ans<<endl;
}

int main() {
     int t;
    cin>>t;
    while(t--)
    { solve();
    }

    return 0;
}