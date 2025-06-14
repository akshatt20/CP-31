// lecture
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
   int n;
   cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> prefix(n);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    int q;
    cin>>q;
    while(q--)
  {   int l,r;
      cin>>l>>r;
      long long  sum=0; 
      sum+=prefix[r];
      if(l>0){
          sum-=prefix[l-1];
      }
      cout<<sum<<" ";
  }
    

    

    return 0;
}