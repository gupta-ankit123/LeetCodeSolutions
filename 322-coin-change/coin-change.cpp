class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        for(int i=0;i<=amount;i++) {
            if(i%coins[0]==0) dp[0][i]=i/coins[0];

            else dp[0][i]= 1e9;
        }

        for(int ind=1;ind<n;ind++){
            for(int sum=0;sum<=amount;sum++){
                int nottake=dp[ind-1][sum];
                int take=INT_MAX;
                if(coins[ind]<=sum) take=1+dp[ind][sum-coins[ind]];
                 dp[ind][sum]=min(take,nottake);
            }
        }

        int ans=dp[n-1][amount];
        if(ans>=1e9) return -1;
        return ans;
    }
};