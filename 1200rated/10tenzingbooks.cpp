#include <bits/stdc++.h>
using namespace std;

bool check(int value,vector<int> &bits)
{
    int i=0;
    while(value!=0)
    {
        int bit=value&1;
        value=value>>1;
        if(bit==1 && bits[i]==0)return false;
        i++;
    }
    return true;
  
}
void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    for(auto &it:a)cin>>it;
    for(auto &it:b)cin>>it;
    for(auto&it:c)cin>>it;
    int m=x;
    vector<int> bits(32,0);
    int j=0;
    while(m!=0)
    {
        int bit=m&1;
        if(bit)bits[j]++;
        j++;
        m=m>>1;
    }
    int num=0;
    vector<bool> flags(3,true);
    for(int i=0;i<n;i++)
    {
        if(num==x)break;
        if(flags[0])
        {
            int val=a[i];
            if(check(val,bits))num|=val;
            else flags[0]=false;
        }
       
        if(flags[1])
        {
            int val=b[i];
            if(check(val,bits))num|=val;
            else flags[1]=false;
        }
        if(flags[2])
        {
            int val=c[i];
            if(check(val,bits))num|=val;
            else flags[2]=false;
        }

        
    }
    if(num==x)cout<<"YES"<<endl;
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
