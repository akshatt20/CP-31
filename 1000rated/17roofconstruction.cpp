#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int k=0;
    while ((1 << (k + 1)) <= n - 1) { 
            ++k;  
        }
        for (long p = (1 << k) - 1; p >= 0; p--) {  
            cout<<p<<" ";
        }

        for (long p = (1 << k); p < n; p++) {  
           cout<<p<<" ";
        }
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
