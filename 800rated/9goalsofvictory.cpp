#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        long long sum=0;
        for(int i=0;i<n-1;i++)
        {cin>>arr[i];
            sum+=arr[i];
        }
        long long x=0;
        // sum+x=0;
        x=-sum;
        cout<<x<<endl;
    
        
       
    }

    return 0;
}