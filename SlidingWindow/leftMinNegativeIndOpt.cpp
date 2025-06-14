#include <bits/stdc++.h>
using namespace std;
void leftMinIndexN(vector<int> &arr,int k)
{
    deque<int> q;
    int n=arr.size();
    for(int i=0;i<n;i++)
    { 
        if(arr[i]<0)q.push_back(i);
       if(q.size())
       {if(i-q.front()==k)q.pop_front();}
       if(i>=k-1)
       {
           if(q.size())cout<<q.front()+1<<endl;
           else cout<<-1<<endl;
       }
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
    leftMinIndexN(arr,k);

    return 0;
}