#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        unordered_map<long long,int> track;
        long long i=2;
        while(i<1e15)
        {
            track[i]++;
            i*=2;
        }
        if(track[n])
        {
         cout<<"NO"<<endl;   
        }
        else cout<<"YES"<<endl;
    }

    return 0;
}