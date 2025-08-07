#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> count(26,0);
    for(int i=0;i<n;i++)count[s[i]-'a']++;
    for(int i=0;i<26;i++)
   { if(count[i]==0)
      {char ch=i+'a';
      cout<<ch<<endl;
       return;}
   }
   for(int i=0;i<26;i++)
   {
       for(int j=0;j<26;j++)
       {
           char ii=i+'a';
           char jj=j+'a';
           string ch="";
           ch+=ii;
           ch+=jj;
           if(s.find(ch)==string::npos)
           {
               cout<<ch<<endl;
               return;
           }
       }
   }
    for(int i=0;i<26;i++)
   {
       for(int j=0;j<26;j++)
       { 
           for(int k=0;k<26;k++)
           {
           char ii=i+'a';
           char jj=j+'a';
           char kk=k+'a';
            string ch="";
           ch+=ii;
           ch+=jj;
           ch+=kk;
           if(s.find(ch)==string::npos)
           {
               cout<<ch<<endl;
               return;
           }
           }
           
       }
   }
}
int main() {
  int t;
  cin>>t;
  while(t--)
  {
      solve();
  }

}