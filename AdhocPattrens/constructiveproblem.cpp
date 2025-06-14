#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> track;
    for(int i=0;i<n;i++)track[arr[i]]++;
    int mex=0;
    while(true)
    {
        if(track[mex]>0)mex++;
        else break;
    }
    int target=mex+1;
    int l=-1,r=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            if(l==-1){l=i;}
            r=i;
        }
    }
    if(l!=-1)
    {
      for(int i=l;i<=r;i++)arr[i]=mex;
      map<int,int> count;
      for(int i=0;i<n;i++)count[arr[i]]++;
      bool flag=true;
      for(int i=0;i<target;i++)
      {
          if(count[i]==0){
              flag=false;
              break;
          }
      }
      if(flag)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      
    }
    else{
        bool flag=false;
        for(auto &it:track)
        {
            if(it.first<target && it.second>1)flag=true;
            if(it.first>target && it.second>0)flag=true;
        }
         if(flag)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	 solve();
	}
}