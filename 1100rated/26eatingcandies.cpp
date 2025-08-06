#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<long long> &arr,long long mid)
{   long long n=arr.size();
    if(n==1)return false;
   long long cnt=0;
   long long s=0,sSum=arr[0];
   long long e=n-1,eSum=arr[n-1];
   while(s<e)
   {
       if(sSum==eSum)
       {
           cnt=(s+1+n-(e));
           s++;
           e--;
           if(s<e)
           {sSum+=arr[s];
           eSum+=arr[e];}
           
       }
       else if(sSum<eSum)
       {
           s++;
           if(s<e)
           {sSum+=arr[s];}
       }
       else{
           e--;
           if(s<e)
           {  eSum+=arr[e];}
       }
       if(cnt>=mid)return true;
   }
    if(cnt>=mid)return true;
    else return false;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    vector<long long> arr(n);
	    for(auto &it:arr)cin>>it;
	    long long s=0;
	    long long e=n;
	    long long ans=0;
	    while(s<=e)
	    {
	        long long mid=s+(e-s)/2;
	        if(isPossible(arr,mid))
	        {
	            ans=mid;
	            s=mid+1;
	        }
	        else e=mid-1;
	    }
	    cout<<ans<<endl;
	    
	}

}