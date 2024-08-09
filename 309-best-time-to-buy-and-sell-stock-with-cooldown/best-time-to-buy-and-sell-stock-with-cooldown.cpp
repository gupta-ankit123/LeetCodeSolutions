class Solution {
public:

    int solve(int ind,int buy,vector<int> &prices,vector<vector<int>>&dp){
        int n=prices.size();
        if(ind==n ||ind>n) return 0;
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        int profit=0;
        if(buy){
            if(ind+1<=n) profit=max(-prices[ind]+solve(ind+1,0,prices,dp),solve(ind+1,1,prices,dp));
        }
        else{
            if(ind+2<=n ||ind+1<=n) profit=max(prices[ind]+solve(ind+2,1,prices,dp),solve(ind+1,0,prices,dp));
        }
        return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));

        return solve(0,1,prices,dp);
    }
};