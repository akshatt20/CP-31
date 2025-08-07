#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(auto &it:arr)cin>>it;
    bool flag=true;
    for(int i=1;i<n;i++)
    {
     if(arr[i]<arr[i-1]){
         flag=false;
         break;
     }   
    }
    if(flag){
        
        cout<<0<<endl;
        return;
    }
    if(arr[n-2]>arr[n-1])
    {
        cout<<-1<<endl;
        return;
    }
 
   
    if(arr[n-1]>=0)
    {
         cout << n - 2 << endl;
        for (int i = 1; i <= n - 2; ++i) {
            cout << i << " " << n-1 << " " << n << endl;
        }
        
    }
    else{
       cout<<-1<<endl;
        return;  
    }
  
    //for(auto &it:arr)cout<<it<<" ";
  
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}