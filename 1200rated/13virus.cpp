#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> arr(m);
        for(auto &it:arr)cin>>it;
        sort(arr.begin(),arr.end());
        vector<ll> diff;
        for(int i=0;i<m-1;i++)
        {
            diff.push_back(arr[i+1]-arr[i]-1);
        }
        diff.push_back(arr[0]-1+n-arr[m-1]);
        sort(diff.rbegin(),diff.rend());

        ll saved=0;
        ll days=0;
        for(auto it:diff)
        {
            ll curr=it-days*2;
            if(curr>0)
            {
             saved++;
             curr-=2;
             days+=2;
             if(curr>0)saved+=curr;
            }
        }
        cout<<n-saved<<endl;
        
    }
    

}