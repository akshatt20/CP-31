#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, p;
    cin >> n >> p;
    vector<long long> arr(n);
    vector<long long> b(n);     
    for (auto &it : arr) cin >> it;
    for (auto &it : b) cin >> it;
    vector<pair<long long,long long>> ans(n);
    for(int i=0;i<n;i++)
    {
        ans[i].first=b[i];
        ans[i].second=arr[i];
    }
    sort(ans.begin(),ans.end());
    long long cost=p;
    long long rem=n-1;
    for(int i=0;i<n;i++)
    {
        if(ans[i].first>=p)break;
        if(rem>ans[i].second)
        {
            rem-=ans[i].second;
            cost=cost+ans[i].second*ans[i].first;
        }
        else 
       { cost=cost+rem*ans[i].first;
           rem=0;
       }
    }
    cost=cost+(rem)*p;
    cout<<cost<<endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}