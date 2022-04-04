class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> v;
        int sum=0;
        for(auto i:nums){
            sum=sum+i;
            v.push_back(sum*-1);
        }
        if(*max_element(v.begin(),v.end())<=0){
            return 1;
        }
        else return(1+*max_element(v.begin(),v.end()));
    }
};
