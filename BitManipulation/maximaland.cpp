// CODEFORCES 1300
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
     int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        long long ans=0;
        for(int j=30;j>=0;j--){
            int cnt=0;
            for(int i=0;i<n;i++){
                if(!((1<<j)&arr[i]))
                {
                    cnt++;
                } 
            }
            if(k>=cnt){
                k-=cnt;
                long long val=1LL*(1<<j);
                ans=ans+val;
            }
        }
        cout<<ans<<endl;}

    return 0;
}