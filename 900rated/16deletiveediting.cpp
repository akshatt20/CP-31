#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    vector<int> count(26,0);
      for(int i=0;i<s.size();i++)// O(N)
    {
        count[s[i]-'A']++;
    }
    for(int i=0;i<t.size();i++)//O(N)
    {
        count[t[i]-'A']--;
    }
    for(int i=0;i<26;i++)
    {  
        if(count[i]<0)
       { cout<<"NO"<<endl;
        return;}
        
          while(count[i])
          {
             size_t pos=s.find(i+'A');
             if(pos!=string::npos)s.erase(pos,1);
             else  { cout<<"NO"<<endl;
        return;}
             count[i]--;
          }
        
    }
    if(s.size()!=t.size()) { cout<<"NO"<<endl;
        return;}
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i]) { cout<<"NO"<<endl;
        return;}
    }
  cout<<"YES"<<endl;
}
int main() {
      int n;
    cin>>n;
    while(n--)
    { 
       solve();
    }

    return 0;
}