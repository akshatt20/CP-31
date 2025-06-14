#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<char> st;
    int i=0;
    int cnt=0;
    while(i<n)
    {
      if(s[i]=='(')st.push('(');
      else {
          if(!st.empty() && st.top()=='(')st.pop();
          else cnt++;
      }
      i++;
    }
    cout<<cnt<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}
