#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
         bool flag=true;
        long long n=s.size();
        long long cons=0;
        long long first=0;
        if(s[0]=='1')cons=1;
        else flag=false;
        long long maxi=0;
        for(long long i=1;i<n;i++)
        { 
         if( s[i]=='1')
         {
             cons++;
             maxi=max(maxi,cons);
         }
         else
        { if(flag)
        {
            first=cons;
            flag=false;
        }
            cons=0;
        
        }
        }
        if(s[0]=='1')
        {
            cons+=first;
            maxi=max(maxi,cons);
        }
        long long ans=0;
        long long value=maxi;
        if(maxi>=n)
        {
            ans=n*n;
        }
        else{
            for(long long i=1;i<=(value+1/2);i++)
            {
                long long val=i*maxi;
                ans=max(ans,val);
                maxi--;
            }
        }
        cout<<ans<<endl;
    }

}