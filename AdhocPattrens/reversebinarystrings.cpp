// 1200
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int oc=0,zc=0;
    int maxi=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1] && s[i]=='0')oc++;
        else if(s[i]==s[i+1] && s[i]=='1')zc++;
        maxi=max(zc,oc);
        
    }
    cout<<maxi<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}