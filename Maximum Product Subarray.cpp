class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int imax=nums[0];
      int imin=nums[0];
      int r=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(imax,imin);
            }
          imax=max(nums[i],imax*nums[i]);
          imin=min(nums[i],imin*nums[i]);
            r=max(r,imax);
        }
        return r;
    }
};
