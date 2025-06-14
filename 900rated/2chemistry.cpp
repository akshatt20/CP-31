#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> count(26,0);
        for(int i=0;i<n;i++)
        {
            count[s[i]-'a']++;
        }
        int extra=0;
        for(int i=0;i<26;i++)
        {
            if(count[i]%2)extra++;
        }
        if(k+1<extra )cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }

    return 0;
}