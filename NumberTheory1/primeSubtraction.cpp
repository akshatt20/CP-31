// CODEFORCES 
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--)
 {  long long x;
   long long y;
   cin>>x;
   cin>>y;
   long long diff=x-y; 
    if(diff==1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    cout<<endl;
 }
   

    return 0;
}