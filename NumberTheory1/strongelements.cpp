 // CODECHEF 
 #include <bits/stdc++.h>
using namespace std;
long long solve(vector<long long> &arr,int N)
{
    long long cnt=0;
    vector<long long> pre(N);
    vector<long long> suff(N);
    pre[0]=arr[0];
    suff[N-1]=arr[N-1];
    for(int i=1;i<N;i++)
    {
        pre[i]= __gcd(arr[i],pre[i-1]);
    }
    for(int i=N-2;i>=0;i--)
    {
        suff[i]=__gcd(arr[i],suff[i+1]);
    }
    
     for(int i=0;i<N;i++)
     { long long  left=0;
     long long  right=0;
         if(i!=0){
             left=pre[i-1];
         }
         if(i!=N-1)
         {
             right=suff[i+1];
         }
         int v=__gcd(left,right);
         if(v!=1){
             cnt++;
         }
     }
     return cnt;
}
   
  
   
    
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    vector<long long> arr(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	    long long ans=solve(arr,N);
	    cout<<ans;
	    cout<<endl;
	}
	return 0;

}