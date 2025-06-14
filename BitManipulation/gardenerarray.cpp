// CODEFORCES 1300
#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    unordered_map<int,int> track;
    vector<vector<int>> arr(n);
    for(int i=0;i<n;i++){
        int len;
        cin>>len;
        while(len--){
            int elementPos;
            cin>>elementPos;
            track[elementPos]++;
            arr[i].push_back(elementPos);
        }
    }
    for(int i=0;i<n;i++){
        bool flag=true;
        for(auto it:arr[i]){
            if(track[it]==1){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
            return;
        }
    }
      cout<<"NO"<<endl;
    
}

int main() {
      int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}