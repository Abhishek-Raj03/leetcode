class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       vector<int> v;
         unordered_map<int,int> mp;
        int m=nums1.size();
        int n=nums2.size();
        
        for(int i=0;i<m;i++)
            mp[nums1[i]]++;
        
        for(int i=0;i<n;i++){
            if(mp[nums2[i]]>0){
                mp[nums2[i]]--;
                v.push_back(nums2[i]);
            }
        }
        return v;
    }
};
