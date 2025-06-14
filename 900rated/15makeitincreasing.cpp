#include <bits/stdc++.h>
using namespace std;
void solve()
{
        int n;
        cin>>n;
        vector<int> arr(n);
        for(auto &it:arr)cin>>it;
        int cnt=0;
        // starting from end
        for(int i=n-2;i>=0;i--)
        {
            while(arr[i]>=arr[i+1] && arr[i]>0)
            {
                arr[i]/=2;
                cnt++;
            }
            if(arr[i]==arr[i+1])
            {cout<<-1<<endl;
            return;}
        }
        cout<<cnt<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    { 
       solve();
    }

    return 0;
}