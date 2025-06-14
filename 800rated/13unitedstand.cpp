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
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<long long> b;
        vector<long long> c;
        long long maxi=*max_element(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            if(arr[i]==maxi)c.push_back(arr[i]);
            else b.push_back(arr[i]);
        }
        if(b.size()==0)cout<<-1<<endl;
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto &it:b)cout<<it<<" ";
            cout<<endl;
            for(auto &it:c)cout<<it<<" ";
            cout<<endl;
            
        }
        
        
    }

    return 0;
}