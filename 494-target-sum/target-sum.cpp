class Solution {
public:

    int solve(vector<int>&nums,int target){
        int n=nums.size();

        vector<vector<int>>dp(n,vector<int>(target+1,0));

        if(nums[0]==0) dp[0][0]=2;
        else dp[0][0]=1;

        if(nums[0]!=0 && nums[0]<=target)dp[0][nums[0]]=1;

        for(int i=1;i<n;i++){
            for(int sum=0;sum<=target;sum++){
                int notpick=dp[i-1][sum];
                int pick=0;
                if(nums[i]<=sum) pick=dp[i-1][sum-nums[i]];

                dp[i][sum]=pick+notpick;
            }
        }
        return dp[n-1][target];

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int totSum=0;
        for(int i=0;i<nums.size();i++){
            totSum+=nums[i];
        }
        if(totSum-target<0) return 0;
        if((totSum-target)%2!=0) return 0;
        int tar=(totSum-target)/2;
        return solve(nums,tar);
    }
};