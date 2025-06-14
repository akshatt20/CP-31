// CODEFORCES 1100 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string x;
        string y;
        cin>>x;
        cin>>y;
        reverse(x.begin(),x.end());
        reverse(y.begin(),y.end());
        int posy=0;
        int posx=0;
        for(int i=0;i<y.size();i++){
            if(y[i]=='1'){
                posy=i;
                break;
            }
        }
        for(int j=posy;j<x.size();j++){
            if(x[j]=='1'){
                posx=j;
                break;
            }
            
        }
        cout<<posx-posy<<endl;
        
    }

    return 0;
}