class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(3,vector<int>(k+1,0)));
        int profit=0;
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                for(int trans=1;trans<=k;trans++){
                    if(buy){
                        profit=max(-prices[ind]+dp[ind+1][0][trans],dp[ind+1][1][trans]);
                    }

                    else{
                        profit=max(prices[ind]+dp[ind+1][1][trans-1],dp[ind+1][0][trans]);
                    }
                    dp[ind][buy][trans]=profit;
                }
            }
        }

        return dp[0][1][k];
    }
};