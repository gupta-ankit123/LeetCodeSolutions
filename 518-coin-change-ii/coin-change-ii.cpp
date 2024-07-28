class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1));
        for(int i=0;i<n;i++) dp[i][0]=1;

        for(int i=0;i<n;i++){
            for(int sum=1;sum<=amount;sum++){
                int notpick=0;
                if((i-1)>=0) notpick=dp[i-1][sum];
                int pick=0;
                if(coins[i]<=sum) pick=dp[i][sum-coins[i]];
               dp[i][sum]=pick+notpick;
            }
        }
        return dp[n-1][amount];
    }
};