#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      int n=s.size();
      bool flag=true;
      set<char> st;
      int i;
      for(i=0;i<n;i++)
      {
       if(st.find(s[i])==st.end())   st.insert(s[i]);
       else break;
      }
      int size=st.size();
      for(int j=i;j<n;j++)
      {
          if(s[j]!=s[j-size])flag=false;
      }
      if(flag)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
        
    }

}