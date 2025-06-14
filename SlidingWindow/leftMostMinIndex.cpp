#include <bits/stdc++.h>
using namespace std;
// using set
void leftMinIndex(vector<int> &arr,int k)
{
    set<pair<int,int>> st;
    int n=arr.size();
    for(int i=0;i<k;i++)
    {
        st.insert({arr[i],i});
    }
    cout<<st.begin()->second+1<<endl;
    for(int i=k;i<n;i++)
    {
         st.insert({arr[i],i});
         st.erase({arr[i-k],i-k});
         cout<<st.begin()->second+1<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftMinIndex(arr,k);

    return 0;
}