class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        int buy = -prices[0] - fee, sell = 0;
        
        for(int i=1;i<n;i++)
        {
            int prev_buy = buy, prev_sell = sell;
            buy = max(buy, prev_sell - prices[i] - fee);
            sell = max(sell, prev_buy + prices[i]);
        }
        return sell;
        
    }
};