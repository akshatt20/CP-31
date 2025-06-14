#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    { int n;
     cin>>n;
     vector<int> arr(n);
     for(auto &it:arr)cin>>it;
     int cnt=0;
     for(int i=0;i<n;i++)
     {
         if(arr[i]==2)cnt++;
     }
     if(cnt%2)cout<<-1<<endl;
     else if(cnt==0)cout<<1<<endl;
     else{
         int ans=0;
         cnt/=2;
         for(int i=0;i<n;i++)
         {
             if(arr[i]==2)cnt--;
             if(cnt==0)
            { cout<<i+1<<endl;
             break;}
             
         }
     }
     
        
    }

    return 0;
}