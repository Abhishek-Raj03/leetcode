class Solution {
public:
    int findMin(vector<int>& nums) {
      int first=0,last=nums.size()-1;
        int mid;
        while(first<last){
            mid=(first+last)/2;
            if(nums[first]<nums[last])
                return nums[first];
            else if(nums[first]>nums[mid])
                last=mid;
            else
                first=mid+1;
        }
        return nums[first];
    }
};
