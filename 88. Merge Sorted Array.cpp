class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     // map<int,bool> mp;
     //    int k=0;
     //    for(int i=0;i<m;i++)
     //        mp[nums1[i]]=true;
     //    for(int j=0;j<n;j++)
     //        mp[nums2[j]]=true;
     //    for(auto i:mp){
     //        nums1[k]=i.first;
     //        k++;
     //    }
        for(int i=m,k=0;i<m+n;i++,k++){
            nums1[i]=nums2[k];
        }
        sort(nums1.begin(),nums1.end());
    }
};
