class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& obstacleGrid,vector<vector<int>>&dp){
        if(i==0 && j==0) return 1;
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int up=0;
        int left=0;
        if(i>0){
            if(obstacleGrid[i-1][j]!=1 ){
                up=solve(i-1,j,obstacleGrid,dp);
            }
        }
        if(j>0){
            if(obstacleGrid[i][j-1]!=1){
                left=solve(i,j-1,obstacleGrid,dp);
            }
        }
        return dp[i][j]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        if(obstacleGrid[m-1][n-1]==1){
            return 0;
        }
        return solve(m-1,n-1,obstacleGrid,dp);
    }
};