//  1300
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int zc=0,oc=0;
    for(int i=0;i<n;i++)
    {
    if(s[i]=='0')zc++;
    else oc++;
    }
    if(zc!=oc){cout<<-1<<endl;
    return;}
    deque<char> d;
    int distance=0;
    for(int i=0;i<n;i++)d.push_back(s[i]);
    vector<int> ans;
    while(!d.empty())
    {
        if(d.back()==d.front())
        {
            if(d.front()=='0')
            {
                d.push_back('0');
                d.push_back('1');
                ans.push_back(n-distance);
            }
            else
            {   d.push_front('1');
                d.push_front('0');
                ans.push_back(0+distance);
            }
            n+=2;
        }
        else{
            while(!d.empty() && d.back()!=d.front() )
            {
                d.pop_back();
                d.pop_front();
                distance++;
            }
        }
    }
   cout<<ans.size()<<endl;
   if(ans.size()==0) return;
   for(auto &it:ans)cout<<it<<" ";
   cout<<endl;
    
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

}
