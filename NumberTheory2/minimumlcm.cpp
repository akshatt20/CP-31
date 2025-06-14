// CODEFORCES 1000
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=1;
        int b=n-1;
        long long mini=a*b;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                int a1=i;
                int b1=n-a1;
                long long val=max(a1,b1);
                if(val<mini)
                {
                    mini=val;
                    a=a1;
                    b=b1;
                }
                if(i!=n/i)
                {
                    int a2=n/i;
                    int b2=n-a2;
                    val=max(a2,b2);
                    if(val<mini)
                    {
                        mini=val;
                        a=a2;
                    b=b2;
                    }
                }
            }
        }
        cout<<a<<" "<<b;
        cout<<endl;
        
    }

    return 0;
}