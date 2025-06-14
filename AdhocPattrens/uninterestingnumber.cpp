// CODEFORCES 1200
#include <bits/stdc++.h>
using namespace std;

void solve()
{
        string n;
	    cin>>n;
	    long long sum=0;
	    int two=0,three=0;
	    int size=n.size();
	    for(int i=0;i<size;i++)
	    {
	        int val=n[i]-'0';
	        if(val==2)two++;
	        if(val==3)three++;
	        sum+=val;
	    }
	    if(sum%9==0){
	        cout<<"YES"<<endl;
	        return;
	    }
	    for(int i=0;i<2;i++)
	    {
	        int target=9-(sum%9);
	        if(i==1)target=18-(sum%9);
	        for(int req=0;req*2<=target && req<=two;req++)
	        {
	            int left=target-2*req;
	            int threeCount=left/6;
	            if(left%6==0 && threeCount<=three)
	            {
	                cout<<"YES"<<endl;
	                return;
	            }
	        }
	        
	    }
	    cout<<"NO"<<endl;
	    
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	    
	}

}
