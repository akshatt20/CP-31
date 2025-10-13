#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int cnt=0;
    vector<int> prefix(n);
    for(int i=0;i<n;i++)
    {
        if(a[i]=='1')cnt++;
        prefix[i]=cnt;
    }
    if(n%2)
    {
        if(a[n-1]!=b[n-1])
        {
            cout<<"NO"<<endl;
            return;
        }
        n--;
    }
    int i=n-1;
    bool flag=true;
    while(i>0)
    {
        if((flag && a[i]==b[i] && a[i-1]==b[i-1]) || 
        (!flag && a[i]!=b[i] && a[i-1]!=b[i-1])){i-=2;}
        else if(prefix[i]==(i+1)/2 && ((a[i]!=b[i] && a[i-1]!=b[i-1])|| (a[i]==b[i] && a[i-1]==b[i-1])))
        {
            flag=!flag;
            i-=2;
        }
        else {
             cout<<"NO"<<endl;
             return;
        }
        
    }
    cout<<"YES"<<endl;
} 

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}