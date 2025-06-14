#include <bits/stdc++.h>
using namespace std;



int main() {
  int n;
  cin>>n;
  string s;
  cin>>s;
  vector<int> count(26,0);
  for(int i=0;i<s.size();i++)
  {
      count[s[i]-'a']++;
  }
  int start=0;
  bool flag=true;
  char search='0';
  for(int i=0;i<26;i++)
  {
      while(count[i]>0)
      {
         if( s[start]==(i+'a'))start++;
         else { flag=false;
             break;
         }
         count[i]--;
      }
      if(!flag)
     { search=i+'a';
      break;}
  }
  if(search=='0')cout<<"NO"<<endl;
  else
 { for(int i=start;i<s.size();i++)
  {
      if(s[i]==search)
      {
          cout<<"YES"<<endl;
          cout<<start+1<<" "<<i+1<<endl;
          break;
      }
  }
  }
}