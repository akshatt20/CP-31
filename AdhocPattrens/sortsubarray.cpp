#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(auto &it:a)cin>>it;
    for(auto &it:b)cin>>it;
    int start=0,end=n-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            start=i;
            break;
        }
    }
     for(int i=n-1;i>=0 && i>start;i--)
    {
        if(a[i]!=b[i])
        {
            end=i;
            break;
        }
    }
    int tempS=start;
    for(int i=tempS-1;i>=0;i--)
    {
         if(a[i]==b[i] && b[i]<=b[i+1] )start--;
         else break;
    }
    int tempE=end;
    for(int i=tempE+1;i<n;i++)
    {
        if(a[i]==b[i] && b[i]>=b[i-1] )end++;
        else break;
    }
    cout<<start+1<<" "<<end+1<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}
