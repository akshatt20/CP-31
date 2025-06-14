
//CODECHEF 2554 

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	int n=1e7;
	 vector<int>spf (n);
    
    for(int i=0;i<n;i++)
    {
        spf[i]=i;
    }
    for(int i=2;i*i<n;i++)
    {
        if(spf[i]!=i){
            continue;
        }
        for(int j=i*i;j<n;j=j+i)
        {
            if(spf[j]==j)
            {
                spf[j]=i;
            }
        }
    }
	while(T--)
	{
	  int X;
    int Y;
    cin>>X;
    cin>>Y;
    
   
    string a=to_string(X);
    string b=to_string(Y);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    set<int> x;
    set<int> y;
    do{
        if(a[0]!='0')
        {
            int num=stoi(a);
            while(num>1)
            {
               x.insert(spf[num]);
               num/=spf[num];
            }
        }
    }
     while(next_permutation(a.begin(),a.end()));
    
     do{
        if(b[0]!='0')
        {
            int num=stoi(b);
            while(num>1)
            {
               y.insert(spf[num]);
               num/=spf[num];
            }
        }
    }
    while(next_permutation(b.begin(),b.end()));
   int val=1;
   for(auto it:x)
   {
       if(y.find(it)!=y.end())
    {   val=it;}
       
   }
   cout<<val<<endl;
	    
	}

}
