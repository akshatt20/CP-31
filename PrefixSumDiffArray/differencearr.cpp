// LECTURE
// TC-> O(n+q)
// SC-> O(n)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> diff(n+1,0);
    int q;
    cin>>q;
    while(q--){
        int l,r,x;
        cin>>l>>r>>x;
        diff[l]+=x;
        diff[r+1]-=x;
      
    }
   for(int i=1;i<=n;i++){
       diff[i]+=diff[i-1];
   }
   for(int i=0;i<n;i++){
       cout<<diff[i]+arr[i]<<" ";
    }
   
cout<<endl;
    return 0;
}