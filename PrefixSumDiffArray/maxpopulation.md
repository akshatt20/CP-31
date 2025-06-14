LEETCODE 
APPROACH 1 
bool compare(vector<int> a,vector<int> b)
{
    return a[0]<b[0];
}
class Solution {
public:
// birth and death years given of persons

    int maximumPopulation(vector<vector<int>>& logs) {
        sort(logs.begin(),logs.end(),compare);
        int n=logs.size();
        vector<int> prefix(n);
        prefix[0]=1; 
        int maxi=0;
        int maxVal=0;
        for(int i=0;i<n;i++)
        {   int cal=1;
            for(int j=i-1;j>=0;j--)
            { 
                if(logs[i][0]<logs[j][1])
                {
                    cal++;
                }
            }
            if(cal>maxVal)
            {
                maxVal=cal;
                maxi=i;
            }
        }
return logs[maxi][0];
        

    }
};


APPROACH 2 USING PREFIX SUM