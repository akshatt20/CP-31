#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0,j=n-1;
    bool flag=true;
    while(i<=j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<0<<endl;
        return;
    }
    char first=s[i];
    char second=s[j];
    i=0,j=n-1;
    int cnt1=0;
    while(i<=j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        else if(s[i]==first)
        {i++;
        cnt1++;}
        else if(s[j]==first)
        {j--;
        cnt1++;}
        else{
            flag=false;
            cnt1=1e9;
            break;
        }
    }
  //  cout<<cnt1<<endl;
      i=0,j=n-1;
    int cnt2=0;
    while(i<=j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        else if(s[i]==second)
        {i++;
        cnt2++;}
        else if(s[j]==second)
        {j--;
        cnt2++;}
        else{
            flag=false;
            cnt2=1e9;
            break;
        }
    }
int ans=min(cnt1,cnt2);
if(ans!=1e9)cout<<ans<<endl;
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