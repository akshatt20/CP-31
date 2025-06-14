// LEETCODE


class Solution {
public:
string divString(string p)
{ int rem=0;
string d="";
for(auto it:p)
{
    int num=it-'0';
    num=num+rem*10;
    int val=num/2;
     rem=num%2;
    d.push_back(val+'0');
}
while(d.size()>1 && d[0]=='0')
{
    d.erase(d.begin());
}
return d;
}
int calVal(int a,string p)
{
    if(p.size()==1 && p[0]=='0')
    {
        return 1;
    }
    if(p.size()==1 && p[0]=='1')
    {
        return a%1337;
    }
    string div=divString(p);
    int val=calVal(a,div);
    val=((val%1337)*(val%1337))%1337;
    if((p.back()-'0')%2!=0)
    {
        val=((val%1337)*(a%1337))%1337;
    }

    return  val;
}
    int superPow(int a, vector<int>& b) {
        string second="";
        for(auto it:b)
        {
            second.push_back(it+'0');
        } 
        int ans=calVal(a,second);
        return ans;
        
    }
};