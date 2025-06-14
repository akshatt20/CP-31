#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> arr(n);
        long long sum=0;
        for(auto &it:arr)
        {cin>>it;
         sum+=it;
        }
        if(sum%2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }

    return 0;
}