#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       vector<vector<int>> arr(n,vector<int>(n,0));
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
              cin>>arr[i][j]; 
           }
       }
       int cnt=0;
        for(int i=0;i<n/2;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(arr[i][j]!=arr[n-1-i][n-1-j])cnt++;
           }
       }
       if(n%2)
       {
           int row=n/2;
           for(int j=0;j<n/2;j++)
           {
               if(arr[row][j]!=arr[row][n-1-j])cnt++;
           }
       }
       if(cnt<=k)
       {
           k-=cnt;
           if(k%2==0 || n%2==1)
           {
               cout<<"YES"<<endl;
           }
           else cout<<"NO"<<endl;
       }
       else cout<<"NO"<<endl;
    }

}