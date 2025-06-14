#include <bits/stdc++.h>
using namespace std;

void solve()
{
   string a;
   cin>>a;
   string b;
   cin>>b;
   int n=a.length();
   int m=b.length();
   long long maxi=0;
   long long cnt=0;
   string res="";
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
          string val=a.substr(i,j-i+1);
          if(b.find(val)!=string::npos)
          {
              if(maxi<j-i+1){
                maxi=j-i+1;
                 res=val;
              }
          }
       }
   }
   cnt=(n+m-2*maxi);
   cout<<cnt<<endl;
   
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}
