class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
       int maxi=INT_MIN;
        int ans;
        for(auto j:m){
            if(j.second>maxi){
                maxi=j.second;
                ans=j.first;
            }
        }
        return ans;
    }
};
