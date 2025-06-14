#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    { long long n,k;
    cin>>n>>k;
    if(n%2==0||n%k==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        long long diff=n-k;
        if(diff>0 && diff%2==0) cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    }
       
    }

    return 0;
}