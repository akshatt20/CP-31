#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {   int n;
        cin>>n;
        vector<int> arr(n);
        int cnt=0;
        int sum=0;
        for(int i=0;i<n;i++){cin>>arr[i];
            if(arr[i]==-1)cnt++;
            sum=sum+arr[i];
        }
        int ans=0;
        while(sum<0)
        {
            ans++;
            sum+=2;
            cnt--;
        }
        if(cnt%2)ans++;
        cout<<ans<<endl;
    }

    return 0;
}