// CODEFORCES 1400

#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,m,q;
    cin>>n>>m>>q;
    long long s1,s2,e1,e2;
    long long region1,region2;
    
    long long gc=__gcd(n,m); // no of regions 
    long long n1=n/gc;
    long long m1=m/gc;
    while(q--)
    {
        cin>>s1>>s2>>e1>>e2;
        if(s1==1){
            region1=(s2-1)/n1;
        }
        else{
            region1=(s2-1)/m1;
        }
        if(e1==1)
        {
            region2=(e2-1)/n1;
        }
        else{
            region2=(e2-1)/m1;
        }
        if(region1 == region2){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    
    return 0;
}