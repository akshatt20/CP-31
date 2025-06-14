// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> dup(n);
    int mini=INT_MAX;
     for(int i=0;i<n;i++)
    {  if(arr[i]<mini){mini=arr[i];}
    dup[i]=arr[i];
    }
    sort(dup.begin(),dup.end());
    for(int i=0;i<n;i++)
    {
        if(arr[i]==dup[i]){
            continue;
        }
        else if(arr[i]%mini!=0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main() {
    // Write C++ code here
    int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}

    return 0;
}