class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int smallestStart = 10e4;
        for(int i = 0; i < prices.size(); i ++){

            if(prices[i] < smallestStart){
                smallestStart = prices[i];
                continue;
            }
            int potentialProfit = prices[i] - smallestStart;
            maxProfit = max(potentialProfit, maxProfit);


        }
        return maxProfit;
    }
};