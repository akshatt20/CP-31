#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n;
        cin>>a>>b>>n;
        vector<long long> arr(n);
        for(auto &it:arr)cin>>it;
        long long sum=b;
        sort(arr.begin(),arr.end()); 
        for(int i=0;i<n;i++)
        {
            if(arr[i]<a){sum+=arr[i];
              
            }
            else{
                sum=sum+(n-i)*(a-1);
              
                break;
            }
        }
        cout<<sum<<endl;
        
    }

    return 0;
}