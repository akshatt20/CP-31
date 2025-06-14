#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,q;
    cin>>n>>q;
    vector<long long>a(n);
    vector<long long>x(q);
    for(auto &it:a)cin>>it;
    for(auto &it:x)cin>>it;
    long long prev=INT_MAX;
    long long mini=INT_MAX;

   for(int j=0;j<q;j++)
   {   int num=x[j];
       if(num<prev)
       {  prev=num;
           int val=1<<num; 
           for(int i=0;i<n;i++)
           {
             if(a[i]%val==0)
             {a[i]+=(val/2);
                
             }
           }
       }
       
   }
   for(auto &it:a)cout<<it<<" ";
   cout<<endl;
}
int main() {
   int t;
   cin>>t;
   while(t--)
   {
       solve();
   }

}
