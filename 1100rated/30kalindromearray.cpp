#include <bits/stdc++.h>
using namespace std;
bool isSkipping(vector<int> &arr,int skip)
{
    int s=0;
    int n=arr.size();
    int e=n-1;
    while(s<e)
    {
        if(arr[s]==arr[e])
        {
            s++;
            e--;
        }
        else 
        {
            if(arr[s]==skip)s++;
            else if(arr[e]==skip)e--;
            else return false;
        }
      
    }
    return true;
}
bool isPalindrome(vector<int> &arr)
{
    int s=0;
    int n=arr.size();
    int e=n-1;
    while(s<e)
    {
        if(arr[s]==arr[e])
        {
            s++;
            e--;
        }
        else 
        {
            return isSkipping(arr,arr[s])||isSkipping(arr,arr[e]);
        }
    }
    return true;
}

int main() {
     int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(auto &it:arr)cin>>it;
        bool ans=isPalindrome(arr);
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}