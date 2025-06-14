#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {long long n;
     cin>>n;
    vector<long long > arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    
    int cnt=0;
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
          if(odd>0)  cnt=cnt+(odd-1);
            odd=0;
        }
        else{
            odd++;
          if(even>0)  cnt=cnt+(even-1);
            even=0;
        }
    }
     if(odd>0)  cnt=cnt+(odd-1);
       if(even>0)  cnt=cnt+(even-1);
    cout<<cnt<<endl;
     }
     
        
    

    return 0;
}