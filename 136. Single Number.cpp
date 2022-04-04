class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int k=0;
        for(auto i:m){
            if(i.second==1){
                 k= i.first;
                break;
            }
        }
        return k;
            
    }
};
