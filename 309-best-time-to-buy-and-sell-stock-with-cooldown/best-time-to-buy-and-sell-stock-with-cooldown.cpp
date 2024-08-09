class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;

        vector<vector<int>>dp(n+2,vector<int>(3,0));
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                if(buy){
                if(ind+1<=n) profit=max(-prices[ind]+dp[ind+1][0],dp[ind+1][1]);
                }
                else{
                    if(ind+1<=n ) profit=max(prices[ind]+dp[ind+2][1],dp[ind+1][0]);
                }
                 dp[ind][buy]=profit;
            }
        }

        return dp[0][1];
    }
};