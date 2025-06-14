#include <bits/stdc++.h>
using namespace std;

long long solve(long long a,long long b)
{
   long long cnt=0;
   while(a!=0)
   {
       cnt++;
       a/=b;
   }
   return cnt;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	 long long a,b;
	 cin>>a>>b;
	 if(a<b){cout<<1<<endl;
	 continue;}
	 long long ans=0;
	 long long inc=0;
	 if(b==1)
	 {
	     ans=1;
	     b++;
	     inc=1;
	 }
	 long long val=solve(a,b);
	 ans+=val;
	 
	 while(true)
	 {   b++;
	     long long next=solve(a,b);
	     inc++;
	     if(next+inc<=ans)
	     {
	         ans=next+inc;
	     }
	     else break;
	 }
	 cout<<ans<<endl;
	 
	}

}