#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n);
    vector<long long> b(n);
    for(auto &it:a)cin>>it;
    for(auto &it:b)cin>>it;
    long long total=0;
    vector<long long> prefix(n);
    prefix[0]=a[0];
    for(int i=1;i<n;i++)prefix[i]=prefix[i-1]+a[i];
   // for(auto &it:prefix)cout<<it<<" ";
    vector<long long> maxim(n);
    maxim[0]=b[0];
    for(int i=1;i<n;i++)
    {
        maxim[i]=max(maxim[i-1],b[i]);
    }
    for(int i=0;i<n && k>0;i++)
    {
        long long val=prefix[i]+(k-1)*maxim[i];
        total=max(total,val);
        k--;
    }
     cout<<total<<endl;
}
int main() {
  int t;
  cin>>t;
  while(t--)
  {
      solve();
  }

}
