#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> arr(n);
        for(auto &it:arr)cin>>it;
        map<ll,ll> track;
        vector<ll> temp;
        for(int i=0;i<n;i++)
        {
            track[arr[i]]++;
           
        }
        for(auto &it:track)temp.push_back(it.first);
        ll ans=0;
        ll size=temp.size();
        ans+=track[temp[0]];
        for(int i=1;i<size;i++)
        {   
            if(track[temp[i]]>track[temp[i]-1])
            {
                ans+=(track[temp[i]]-track[temp[i]-1]);
            }
        }
        
        cout<<ans<<endl;
        
    }
    

}