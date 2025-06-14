#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,x;
        cin>>n>>k>>x;
   
        long long m=n;
        long long sumStart=k*(k+1)/2;
        long long sumEnd=n*(n+1)/2;
         long long sumE=(n-k)*(n-k+1)/2;
         sumEnd-=sumE;
        if(sumStart>x||sumEnd<x)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }

    return 0;
}