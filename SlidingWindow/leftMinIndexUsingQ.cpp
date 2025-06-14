#include <bits/stdc++.h>
using namespace std;
// optimised using deque
void leftMinIndex(vector<int> &arr,int k)
{
    deque<int> q;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {  while(q.size() && arr[q.back()]>arr[i])q.pop_back();
    q.push_back(i);
    if(i-q.front()==k)q.pop_front();
        if(i>=k-1)cout<<q.front()+1<<endl;
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