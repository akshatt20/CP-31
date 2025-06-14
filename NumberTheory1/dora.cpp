// CODEFORCES 1500 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
   
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       long long a,b;
       cin>>a>>b;
       vector<long long> arr(n);
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       long long gc=__gcd(a,b);
       long long  maxi=0;
       for(int i=0;i<n;i++){
           if(arr[i]>maxi){
               maxi=arr[i];
           }
       }
       for(int i = 0; i < n; i++) {
    
    arr[i] += (maxi - arr[i]) / gc * gc;
}
 
       sort(arr.begin(),arr.end());
       long long mi=LLONG_MAX;
       for(int i=0;i<n-1;i++)
       {
           long long di=(arr[i]+gc)-arr[i+1];
           if(di<mi){
               mi=di;
           }
       }
       long long r=arr[n-1]-arr[0];
       if(r<mi){
           mi=r;
       }
       cout<<mi<<endl;
   }
 
    return 0;
}