//  CODEFORCES 1200
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code herer
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long>prefix(n+1);
    prefix[0]=0;
    for(int i=1;i<=n;i++)
    { 
       prefix[i]=prefix[i-1]+arr[i-1]; 
    }
    sort(arr.begin(),arr.end());
    vector<long long>prefixSor(n+1);
    prefixSor[0]=0;
    for(int i=1;i<=n;i++)
    { 
       prefixSor[i]=prefixSor[i-1]+arr[i-1]; 
    }
    int m;
    cin>>m;
    while(m--)
    {
        int type,l,r;
        cin>>type>>l>>r;
        long long sum=0;
        if(type==1)
        {
            sum+=prefix[r];
            if(l>0){
                sum-=prefix[l-1];
            }
            
        }
        else
         {
            sum+=prefixSor[r];
            if(l>0){
                sum-=prefixSor[l-1];
            }
            
        }
        cout<<sum<<endl;
    }

    return 0;
}