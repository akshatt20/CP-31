class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> prefix(n+1);
        prefix[0]=0;
        int cnt=0;
        // 1 based indexing prefix sum 
        for(int i=0;i<n;i++)
        {
            prefix[i+1]=prefix[i]+(nums[i]&1);
        }
        int l=0;
        int ans=0;
        for(int m=k-1;m<n;m++){
            while(l<=m && prefix[m+1]-prefix[l]>k){
                l++;
            } 
            if(prefix[m+1]-prefix[l]==k){
                int b=l;
                while(b<=m && prefix[m+1]-prefix[b]==k){
                    b++;
                    ans++;
                }
            }
        }
        return ans;
    }
};