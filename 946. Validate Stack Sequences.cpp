class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0;
        vector<int> v;
        for(int j:pushed){
            v.push_back(j);
            while(v.size()!=0 && v.back()==popped[i]){
                v.pop_back();
                i++;
            }
        }
        return v.size()==0;
    }
};
