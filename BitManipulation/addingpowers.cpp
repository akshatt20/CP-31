// CODEFORCES 1400
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long> arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        long long maxi=0;
        for(auto it:arr){
           maxi=max(maxi,it);
        }
       long long val=1;
       while(val<maxi){
           val=val*k;
       }
       bool ans=true;
       while(val>0){
           bool flag=false;
           for(int i=0;i<n;i++){
               if(arr[i]>=val && flag==false){
                   arr[i]-=val;
                   flag=true;
               }
               else if(arr[i]>=val && flag==true){
                   cout<<"NO"<<endl;
                   ans=false;
                   break;
               }
           }
           if(ans==false){
               break;
           }
           val/=k;
       }
       if(ans){
           for(auto &it:arr)
           if(it!=0){
               cout<<"NO"<<endl;
               ans=false;
           }
       }
       if(ans){
           cout<<"YES"<<endl;
       }
    }

    return 0;
}