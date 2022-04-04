class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
     vector<int> v;
        for(int i=0;i<2*nums.size();i++){
         if(i<nums.size())
            v.push_back(nums[i]);
            else
                v.push_back(nums[i-nums.size()]);
        }
        return v;
    }
};
