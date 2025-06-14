#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    { 
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long diff=d-b;
        if(diff<0)cout<<"-1"<<endl;
        else{
            a=a+diff;
            if(a<c)cout<<"-1"<<endl;
            else{
                long long d=a-c;
                cout<<diff+d<<endl;
            }
        }
    }

    return 0;
}