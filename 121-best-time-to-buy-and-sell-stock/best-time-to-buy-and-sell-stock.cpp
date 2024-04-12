class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int minPrice = INT_MAX; // Initialize minimum price as maximum possible
        int maxProfit = 0; // Initialize maximum profit as 0
        
        for (int i = 0; i < prices.size(); ++i) {
            minPrice = std::min(minPrice, prices[i]); // Update minimum price if current price is lower
            maxProfit = std::max(maxProfit, prices[i] - minPrice); // Update maximum profit if selling at current price gives higher profit
        }
        
        return maxProfit;
    }
};