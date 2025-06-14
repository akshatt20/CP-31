#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
      long long n;
      cin>>n;
      vector<long long> b(n);
      for(int i=0;i<n;i++)cin>>b[i];
      vector<long long> a;
      long long temp=b[0];
      a.push_back(temp);
      for(int i=1;i<n;i++)
      {
          if(b[i]>=temp)
          {
              a.push_back(b[i]);
              temp=b[i];
          }
          else{ a.push_back(b[i]);
              a.push_back(b[i]);
              temp=b[i];
          }
      }
      int m=a.size();
      cout<<m<<endl;
      for(int i=0;i<m;i++)cout<<a[i]<<" ";
      cout<<endl;
    }

    return 0;
}