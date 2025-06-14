#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       string s;
       cin>>s;
       int maxi=0;
       int cnt=1;
       int cntLeft=0;
       int cntRight=0;
       for(int i=0;i<n;i++)
       {
          if(s[i]=='<')
         { cntLeft++;
              maxi=max(maxi,cntRight);
              cntRight=0;
         }
          else{
              cntRight++;
              maxi=max(maxi,cntLeft);
              cntLeft=0;
          }
       }
        maxi=max(maxi,cntRight);
       maxi=max(maxi,cntLeft);
       cout<<maxi+1<<endl;
        
    }

    return 0;
}