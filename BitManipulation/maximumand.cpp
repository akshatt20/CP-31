// CODECHEF 1909

#include <bits/stdc++.h>
using namespace std;
bool comp(pair<long long, long long>& p1, pair<long long, long long>& p2) {
    if (p1.second != p2.second) {
        return p1.second > p2.second;
    }
    return p1.first < p2.first; 
}
int main() {
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    vector<pair<long long ,long long >> contributions(32);
    for(int i=31;i>=0;i--){
        contributions[i].first=i;
        int num=0;
        for(int j=0;j<n;j++){
            if(arr[j] & (1<<i))
            {
               num++;
            }
        }
        long long val=1LL*(1<<i)*num;
         contributions[i].second=val;
    }
    sort(contributions.begin(),contributions.end(),comp);
    long long ans=0;
    for(int i=0;i<k;i++){
        ans=ans|(1<<contributions[i].first);
    }
    cout<<ans<<endl;

    return 0;
}