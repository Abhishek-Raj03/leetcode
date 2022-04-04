class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        unordered_map<int,bool> m;
        for(int i=1;i<=n;i++){
            m[i]=true;
        }
       for(int i=0;i<nums.size();i++){
           if(m.find(nums[i])!=m.end()){
               m.erase(nums[i]);
           }
       }
        for(auto it:m){
            v.push_back(it.first);
        }
        return v;
    }
};
