#include <bits/stdc++.h>
using namespace std;
void solve()
{
      int n,r,b;
      cin>>n>>r>>b;
      string ans="";
      int maxi=r/(b+1);
      int left=r%(b+1);
     for(int i=0;i<=b;i++)
     {
         for(int i=0;i<maxi;i++)ans+="R";
         if(left)
         {
             ans+="R";
             left--;
         }
         if(i!=b)ans+="B";
     }
     cout<<ans<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   solve();
	}

}
