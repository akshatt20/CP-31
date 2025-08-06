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
        int i=0;
        int j=n-1;
        bool flag=false;
        ll maxi=n;
        ll mini=1;
        while(i<j)
        {
            if(arr[i]==mini)
            {
                mini+=1;
                i++;
            }
            else if(arr[i]==maxi)
            {
                maxi-=1;
                i++;
            }
            else if(arr[j]==mini)
            {
                mini+=1;
                j--;
            }
            else if(arr[j]==maxi)
            {
                maxi-=1;
                j--;
            }
            else{
                flag=true;
                break;
            }
        }
        if(i<j && flag)
        {
            cout<<i+1<<" "<<j+1<<" "<<endl;
        }
        else cout<<-1<<endl;
        
    }
    

}