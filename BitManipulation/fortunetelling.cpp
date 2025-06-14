// CODEFORCES 1400
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,y;
        cin>>n>>x>>y;
        vector<long long> arr(n);
        
        for(auto &it:arr){
            cin>>it;
        }
        long long f=1;
        for(int i=0;i<n;i++){
            if(arr[i]&1){
                f=(!f);
            }
        }
        if(x&1){
            if(!((f^y)&1LL)){
                cout<<"Alice"<<endl;
            }
            else{
                cout<<"Bob"<<endl;
            }
        }
        else{
            if(!((f^y)&1LL)){
                cout<<"Bob"<<endl;
            }
            else{
                cout<<"Alice"<<endl;
            }
        }
        
    }

    return 0;
}
// 2nd Approach
/*
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,y;
        cin>>n>>x>>y;
        vector<long long> arr(n);
        long long sum=0;
        for(auto &it:arr){
            cin>>it;
            sum+=it;
        }
        sum+=x;
        sum+=y;
        if(sum%2==0){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
        
        
    }

    return 0;
}
*/