class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     
        int currsum=nums[0];
        int maxsum=nums[0];
        for(int i=1;i<nums.size();i++){
            currsum=max(currsum+nums[i],nums[i]);
            maxsum=max(currsum,maxsum);
        }
        return maxsum;
    }
};
