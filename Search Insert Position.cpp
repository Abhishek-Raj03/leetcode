class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid;
        int low=0,high=nums.size()-1;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
