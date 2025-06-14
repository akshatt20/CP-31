// CODEFORCES 1100
#include <bits/stdc++.h>
using namespace std;

void solve()
{
        
	 int n,m;
	 cin>>n>>m;
	 vector<vector<char>> ans(n,vector<char>(m,0));
	 vector<int> countW(4,0);
	 vector<int> countB(4,0);
	 for(int i=0;i<n;i++)
	 {
	     for(int j=0;j<m;j++)cin>>ans[i][j];
	 }
	 for(int i=0;i<m;i++)
	 {
	     if(ans[0][i]=='W')countW[0]++;
	     else if(ans[0][i]=='B')countB[0]++;
	     
	      if(ans[n-1][i]=='W')countW[1]++;
	     else if(ans[n-1][i]=='B')countB[1]++;
	     
	 }
	 for(int i=0;i<n;i++)
	 {
	     if(ans[i][0]=='W')countW[2]++;
	     else if(ans[i][0]=='B')countB[2]++;
	     
	      if(ans[i][m-1]=='W')countW[3]++;
	     else if(ans[i][m-1]=='B')countB[3]++;
	 }
	 bool flagB=true;
	 bool flagW=true;
	 for(int i=0;i<4;i++)
	 {
	     if(countB[i]==0)flagB=false;
	     if(countW[i]==0)flagW=false;
	 }
	 if(flagW||flagB)cout<<"YES"<<endl;
	 else cout<<"NO"<<endl;
	    
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	    
	}

}
