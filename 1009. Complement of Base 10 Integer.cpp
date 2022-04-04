class Solution {
public:
    int bitwiseComplement(int n) {
        vector<int> v;
        if(n==0)
            return 1;
        else{
        while(n){
          if(n&1)
              v.push_back(0);
            else v.push_back(1);
           n= n>>1;
        }
        int t=v.size();
        int sum=0;
        for(int i=0;i<t;i++){
            sum+=v[i]*pow(2,i);
        }
        return sum;
        }
    }
};
