class Solution {
public:
    int solve(int i,int j,vector<vector<int>> & triangle,vector<vector<int>> & dp){
        int n=triangle.size();
        if(i==n-1){
            return triangle[n-1][j];
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int d=triangle[i][j]+solve(i+1,j,triangle,dp);
        int dg=triangle[i][j]+solve(i+1,j+1,triangle,dp);
        return dp[i][j]=min(d,dg);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();

        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(0,0,triangle,dp);
    }
};