class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        for(int i=0;i<32;i++){
            int k=n>>i;
            if(k&1)
                count++;
        }
        return count;
    }
};
