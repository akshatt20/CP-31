#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {   int n;
        cin>>n;
        vector<int> arr(n);
        for(auto &it:arr)cin>>it;
        int maxi=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                cnt++;
            }
            else{
                maxi=max(maxi,cnt);
                cnt=0;
            }
        }
        maxi=max(maxi,cnt);
        cout<<maxi<<endl;
        
       
    }

    return 0;
}