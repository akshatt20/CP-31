#include <bits/stdc++.h>
using namespace std;

void solve()
{
        int n;
        cin>>n;
        vector<int> arr(n);
        for(auto &it:arr)cin>>it;
        int i=0;
        int j=n-1;
        int m=n;
       while(n>2)
       {
           if(arr[i]==n)i++;
           else if(arr[j]==n)j--;
           else {
               // find pos
               int pos=0;
               for(int k=0;k<m;k++)
               {
                   if(arr[k]==n)pos=k;
               }
               if(pos==i||pos==j)continue;
               else {
                   cout<<"YES"<<endl;
                   cout<<i+1<<" "<<pos+1<<" "<<j+1<<endl;
                   return;
               }
           }
           n--;
       }
       cout<<"NO"<<endl;
        
        
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

// this approach is right but instead we could have directly used the condition that will also work.