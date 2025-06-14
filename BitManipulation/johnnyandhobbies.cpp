// CODEFORCES 1200
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       set<int> s1;
       for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s1.insert(x);
        }
       int ans=-1;
       for(int k=1;k<=1024;k++){
           set<int> temp;
           for (auto it : s1) {
                temp.insert(it ^ k);
            }
           if (temp == s1) {
                ans = k;
                break;
            }
       }
       cout<<ans<<endl;
   }

    return 0;
}