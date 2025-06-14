#include <bits/stdc++.h>
using namespace std;

void solve()
{
 long long a,b;
 cin>>a>>b;
 long long cnt=0;
 if(a==b)cnt=0;
 else if(a<b)
 {
     while(a<b)
     {   cnt++;
         if(a*8<=b)a*=8;
         else if(a*4<=b)a*=4;
         else a*=2;
     }
 }
 else{
     while(a>b)
     {
         cnt++;
         if(a%8==0 && a/8>=b)a/=8;
         else if(a%4==0 && a/4>=b)a/=4;
         else if(a%2==0 && a/2>=b)a/=2;
         else break;
     }
 }
 if(a==b)cout<<cnt<<endl;
 else cout<<-1<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	 solve();
	}
}