class Solution {
public:

    bool solve(int ind,int target,vector<int>& nums, vector<vector<int>>&dp){
        if(nums[ind]==target) return true;
        if(ind==0) return (nums[0]==target);
    if(dp[ind][target]!=-1) return dp[ind][target];
        bool nottake=solve(ind-1,target,nums,dp);
        bool take =false;
        if(target>=nums[ind]){
            take=solve(ind-1,target-nums[ind],nums,dp);
        }
        
        return dp[ind][target]=take|| nottake;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        int target=sum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return solve(n-1,target,nums,dp);
    }
};