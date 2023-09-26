class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minval=INT_MAX;
        int profit=0;

        for(int i=0;i<prices.size();i++){
            if(prices[i]<minval){
                minval=prices[i];
            }
            int currval=prices[i]-minval;
            if(profit<currval){
                profit=currval;
            }
        }
        return profit;
    }
};
