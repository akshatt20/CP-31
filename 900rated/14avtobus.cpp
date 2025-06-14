#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       long long n;
       cin>>n;
       if(n>=4 && n%2==0)
       {
           long long mini=0;
           long long maxi=0;
           long long val=n;
           while(val%4!=0)
           {
               val-=6;
               maxi++;
           }
           maxi=maxi+(val/4);
           val=n;
            while(val%6!=0)
           {
               val-=4;
               mini++;
           }
           mini=mini+(val/6);
           cout<<mini<<" ";
           cout<<maxi<<endl;
           
       }
       else cout<<-1<<endl;
    
    }

    return 0;
}