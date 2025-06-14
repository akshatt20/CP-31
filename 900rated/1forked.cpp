#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long kx,ky;
        cin>>kx>>ky;
        long long qx,qy;
        cin>>qx>>qy;
        long long dx[] = {a, a, -a, -a, b, b, -b, -b};
        long long dy[] = {b, -b, b, -b, a, -a, a, -a};
        set<pair<long long,long long>> s;
        set<pair<long long,long long>> s2;
        for(int i=0;i<8;i++)
        {
            s.insert({kx+dx[i],ky+dy[i]});
        }
        int cnt=0;
         for(int i=0;i<8;i++)
        {
           s2.insert({qx+dx[i],qy+dy[i]});
        }
        for(auto &it:s)
        {
             if (s2.find(it) != s2.end()) cnt++;
        }
        cout<<cnt<<endl;
        
   
    }

    return 0;
}