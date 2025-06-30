#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int> freq;
        vector<int> distinct(n,0);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
         freq[s[i]]++;
         if(freq[s[i]]==1)cnt++;
         distinct[i]=cnt;
        }
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=distinct[i];
        }
        cout<<ans<<endl;
    }

}