class Solution {
public:
    void sortColors(vector<int>& nums) {
      int start=0,end=nums.size()-1;
       for(int i=0;i<=end;i++){
        
           while(nums[i]==2 && i<=end)
               swap(nums[i],nums[end--]);
           while(nums[i]==0 && i>=start)
               swap(nums[i],nums[start++]);
           
           }  
        
    }
};
