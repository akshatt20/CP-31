// CODEFORCES 1100
// here remember max should be 1 not 0 bcoz for n=2 it wont work as it wont enter the loop in this case 
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    map<int,int> count;
    long long max=1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        { int cnt=0;
        while(n%i==0)
        {
            cnt++;
            n/=i;
        }
        if(cnt>max){max=cnt;}
        count[i]=cnt;
          
        }
        
    }
    if(n>1)
    {
        count[n]=1;
    }
    long long result=0;
    for(int i=1;i<=max;i++)
    { long long ans=1;
    for(auto it:count)
    {
        if(it.second>0)
        {  count[it.first]--;
            ans*=it.first;
        }
    }
    result+=ans;
        
    }
    cout<<result<<endl;
    
}
int main() {
    // Write C++ code here
    int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

    return 0;
}