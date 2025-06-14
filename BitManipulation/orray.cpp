// CODEFORCES 1500
#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        
        for(auto &it:arr){
            cin>>it;
        }
        
        unordered_map<int,bool> track;
        vector<int> b;
        int maxi=0;
        for(int j=0;j<31;j++){
            int index=-1;
            int subMaxi=maxi;
            for(int i=0;i<n;i++){
                if(!track[i] && (arr[i]|maxi)>subMaxi){
                    index=i;
                    subMaxi=arr[i]|maxi;
                }
                
            }
            
            
            if(index==-1){
                break;
            }
            
            track[index]=1;
            b.push_back(arr[index]);
            maxi=maxi|subMaxi;
            
        }
        
       for(int i=0;i<n;i++){
           if(!track[i]){
               b.push_back(arr[i]);
           }}
           
            for(auto &it:b){
            cout<<it<<" ";
        }
      
       
        cout<<endl;
    }

    return 0;
}