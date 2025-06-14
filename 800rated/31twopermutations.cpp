#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
    cin>>t;
    while(t--)
    {
    int n,a,b;
    cin>>n>>a>>b;
    if(n==1)cout<<"YES"<<endl;
    else if(a+b==(2*n))cout<<"YES"<<endl;
    else{
        if(a+b>=n-1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    }

    return 0;
}