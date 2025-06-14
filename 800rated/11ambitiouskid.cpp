#include <bits/stdc++.h>
using namespace std;

int main() {
    
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        int mini=1e9;
        for(int i=0;i<n;i++)
        {
            int x=abs(arr[i]);
            mini=min(mini,x);
            
        }
        cout<<mini<<endl;
  
    return 0;
}