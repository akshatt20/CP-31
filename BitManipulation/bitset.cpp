// BITSETS
#include <bits/stdc++.h>
using namespace std;


int main() {
    
 bitset<40> b1;
 bitset<40> b2;
 int n,m;
 cin>>n>>m;
 for(int i=0;i<n;i++){
     int x;
     cin>>x;
     b1[x]=1;
 }
  for(int i=0;i<m;i++){
     int y;
     cin>>y;
     b2[y]=1;
 }
 bitset<40> b3;
 b3=(b1&b2);
 cout<<b3.count()<<endl;

    return 0;
}