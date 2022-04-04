class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int j=0;j<=n;j++){
            int count=0;
        for(int i=31;i>=0;i--){
            int k=j>>i;
            if(k&1){
                count++;
            }
        }
           v.push_back(count);
     }
        return v;
    }
};
