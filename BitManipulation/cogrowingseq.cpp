// CODEFORCES 1300
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
         int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &it:arr){
        cin>>it;
    } 
    vector<int> ans(n,0);
    for(int j=0;j<30;j++){ 
        bool flag=0;
        for(int i=0;i<n;i++){
            if(( arr[i]&(1<<j) )&& flag==0){
                flag=1;
            }
            else if(flag==1 &&((arr[i]&(1<<j))==0) ){
                ans[i]+=(1<<j);
            }
        }
    }
    for(auto &it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
  
    }


    return 0;
}