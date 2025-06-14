// CODEFORCES 1400
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<long long> arr(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
  vector<int> l(m+1);
  vector<int> r(m+1);
  vector<int> d(m+1);
  for(int i=1;i<=m;i++){
      cin>>l[i]>>r[i]>>d[i];
  }
  vector<long long> diff(m+2,0);
  for(int i=0;i<k;i++){
      int x1,y1;
      cin>>x1>>y1;
      diff[x1]++;
     diff[y1+1]--;
  }
  for(int i=1;i<=m;i++)
  {
      diff[i]=diff[i]+diff[i-1];
  }
  vector<long long> df(n+2,0);
  for(int i=1;i<=m;i++){
      long long val=d[i]*diff[i];
      df[l[i]]+=val;
      df[r[i]+1]-=val;
  }
  
      for(int i=1;i<=n;i++)
      {
          df[i]=df[i]+df[i-1];
      }
  
  for(int i=1;i<=n;i++){
      arr[i]+=df[i];
      cout<<arr[i]<<" ";
  }


    return 0;
}