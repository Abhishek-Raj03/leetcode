class Solution {
public:
    int hammingDistance(int x, int y) {
        int res=0;
        int a=x^y;
        while(a>0){
            res+=a%2;
            a>>=1;
        }
        return res;
    }
};
