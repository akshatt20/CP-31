#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<long long> &arr,long long operations,long long k,long long sum)
{ if(sum-operations<=k)return true;
for(int i=arr.size()-1;i>=max(1LL, (long long)arr.size()-operations)
;i--)
{ 
    sum-=arr[i];
    long long opL=operations-(arr.size()-i);
    long long temp=sum-arr[0]+(arr.size()-i+1)*(arr[0]-opL);
    if(temp<=k)return true;
    
}
return false;
    
}
int main() {
    int t;
    cin>>t;
    while(t--)
   { long long n,k;
    cin>>n>>k;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    long long start=0;
    long long end=1e10;
    long long answer=0;
    long long sum=accumulate(arr.begin(),arr.end(),0LL);
    while(start<=end)
    { long long mid=start+(end-start)/2;
    if(isPossible(arr,mid,k,sum))
    { answer=mid;
    end=mid-1;
        
    }
    else{
        start=mid+1;
    }
    
       
   }
   cout<<answer<<endl;
   }
   
    

    return 0;
}