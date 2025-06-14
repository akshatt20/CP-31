#include <bits/stdc++.h>
using namespace std;

void solve()
{
        string s;
        cin>>s;
        string sub1="01";
        string sub2="10";
        int cnt=0;
        while(s.find(sub1)!=string::npos ||s.find(sub2)!=string::npos)
        {
            if(s.find(sub1)!=string::npos)
            {  int pos1 = s.find(sub1);
                s.erase(pos1,2);
                cnt++;
            }
            if(s.find(sub2)!=string::npos)
            { int pos2 = s.find(sub2);
                s.erase(pos2,2);
                cnt++;
            }
        }
        if(cnt%2)cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
        
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        
    }

    return 0;
}