#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        if(n<3)
        {
            cout<<"YES"<<endl;
            continue;
        }
        map<int,int> count;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            count[arr[i]]++;
            s.insert(arr[i]);
        }
        if(s.size()>2)cout<<"NO"<<endl;
        else if(s.size()==1)cout<<"YES"<<endl;
        else{
            int first=*s.begin();
            s.erase(first);
            int second=*s.begin();
            if(abs(count[first]-count[second])<=1)
           { cout<<"YES"<<endl;}
           else cout<<"NO"<<endl;
        }
        
        
    }

    return 0;
}