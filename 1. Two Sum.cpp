class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> v;
      unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            int n=target-nums[i];
            // if(n==nums[i])
            //     continue;
            if(map.find(n)!=map.end()){
                v.push_back(i);
                v.push_back(map[n]);
                return v;
            }
            map[nums[i]]=i;
        }
        return v;
     
    }
};
