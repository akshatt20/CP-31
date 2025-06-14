#include <bits/stdc++.h>
using namespace std;

void solve()
{
   long long n;
   cin>>n;
   while(true)
   {
       long long m=n;
       bool flag=true;
       while(m!=0)
       {
           long long digit=m%10;
           if(digit!=0 && n%digit!=0)
           {
               flag=false;
               break;
           }
           m/=10;
       }
       if(flag){cout<<n<<endl;
       return;}
       n++;
   }
	    
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	    
	}

}