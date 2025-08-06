#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
 ll n,q;
 cin>>n>>q;
 vector<ll> arr(n);
 for(auto &it:arr)cin>>it;
 vector<int> pos(51,n+1);
 for(int i=0;i<n;i++)
 {
     if(pos[arr[i]]==(n+1))pos[arr[i]]=i+1;
     
 }
 while(q--)
 {
     int query;
     cin>>query;
     int position=pos[query];
     for(int i=0;i<51;i++)
     {
         if(pos[i]!=(n+1) && pos[i]<position)pos[i]+=1;
     }
     pos[query]=1;
     cout<<position<<" ";
 }
 cout<<endl;
}