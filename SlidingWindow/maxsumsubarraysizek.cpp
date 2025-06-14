#include <bits/stdc++.h>
using namespace std;
int maxSumSubarraySizeK(vector<int>&arr,int k)
{
    int sum=0;
    int maxSum=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(i>=k)sum-=arr[i-k];
        if(i>=k-1)
        {
            maxSum=max(maxSum,sum);
        }
    }
    return maxSum;
}

int main() {
     int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSumSubarraySizeK(arr,k)<<endl;
    

    return 0;
}