#include <bits/stdc++.h>
using namespace std;

int maxDistinctElements(vector<int> &arr,int k)
{
    map<int,int> count;
    int n=arr.size();
    for(int i=0;i<k;i++)count[arr[i]]++;
    int cnt=count.size();
    for(int i=k;i<n;i++)
    {
        count[arr[i]]++;
        count[arr[i-k]]--;
        if(count[arr[i-k]]==0)count.erase(arr[i-k]);
        int size=count.size();
        cnt=max(cnt,size);
    }
    return cnt;
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
    cout<<maxDistinctElements(arr,k)<<endl;
}