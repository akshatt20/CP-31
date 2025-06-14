#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string s;
        cin>>s;
        int maxi=0;
        int cnt=0;
        int total=0;
        for(int i=0;i<n;i++)
        {
           if(s[i]=='.')
           {
               total++;
               cnt++;
           }
           else{
               maxi=max(maxi,cnt);
               cnt=0;
           }
        }
          maxi=max(maxi,cnt);
          if(maxi>2)cout<<2<<endl;
          else cout<<total<<endl;
        
        
    }

    return 0;
}