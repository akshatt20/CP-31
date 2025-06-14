// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
        int n;
        cin>>n;
        vector<int> arr(n);
        for(auto &it:arr){
            cin>>it;
        }
       for(int mask=0;mask<(1<<n);mask++){
           for(int i=0;i<n;i++){
               if(mask &(1<<i)){
                   cout<<arr[i]<<" ";
               }
               
           }
           cout<<endl;
       }

    return 0;
}
// TC-> N*2N