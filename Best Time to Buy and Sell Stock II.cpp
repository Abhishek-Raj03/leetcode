class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //int min=prices[0];
        int count,sum=0,max=0,min=0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i+1]<prices[i]){
                if(count==1){
                    sum=sum+(max-min);
                }
               count=0;
                min=prices[i+1];
            }
            else{
                if(i==0){
                    min=prices[i];
                   // max=prices[i+1];
                    
                }
                count=1;
                max=prices[i+1];
                if(i==prices.size()-2){
                    sum=sum+(max-min);
                }
            }
        }
        return sum;
    }
};
