// LEETCODE MEDIUM 




class Solution {
public:
// need to keep track of the sum's first occurence as we need to find the max length 
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        map<int,int> count;
        // 0->-1 
        // 1-> 1
        int sum=0;
        for(int i=0;i<n;i++)
        { 
            if(nums[i]){
                sum+=1;
            }
            else{
                sum-=1;
            }

            if(sum==0){
                ans=i+1;
            }
            else if(count.find(sum)!=count.end())
            { 
                ans=max(ans,i-count[sum]);
        } 
        else{
            count[sum]=i;
        }
        }
        return ans;
    }
};