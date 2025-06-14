#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {   int n;
        cin>>n;
        vector<int> a(n);
        for(auto &it:a)cin>>it;
        for(int i=0;i<n;i++)
        {
            int val=n+1-a[i];
            cout<<val<<" ";
        }
        cout<<endl;
       
    }

    return 0;
}