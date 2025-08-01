#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int n=s.size();
	for(int i=1;i<n;i++)
	{
	    if(s[i]!=s[i-1])continue;
	    else{
	        char next=s[i-1];
	        if(i+1<n)
	        {
	            next=s[i+1];
	        }
	        char val;
	        for(char ch='a';ch<='z';ch++)
	        {
	            if(ch!=s[i-1] && ch!=next)
	            {
	                val=ch;
	                break;
	            }
	        }
	        s[i]=val;
	        
	    }
	}
	cout<<s<<endl;

}