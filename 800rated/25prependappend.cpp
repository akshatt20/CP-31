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
     while(!s.empty())
     {
         if(s[0]==s[s.size()-1])
         {
             break;
         }
         else{
             s.erase(0,1);
          if(s.size()>0)   s.pop_back();
             
         }
     }
     cout<<s.size()<<endl;
     
    }

    return 0;
}