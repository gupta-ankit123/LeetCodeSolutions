class Solution {
public:
    int solve(int i,int j,string &s1, string &s2,vector<vector<int>>&dp){
        if(i==0) return j;
        if(j==0) return i;
        if(dp[i][j]!=-1) return dp[i][j];

        if(s1[i-1]==s2[j-1]) return dp[i][j]=solve(i-1,j-1,s1,s2,dp);

        int insertion=solve(i,j-1,s1,s2,dp);
        int deletion=solve(i-1,j,s1,s2,dp);
        int replace=solve(i-1,j-1,s1,s2,dp);

        return dp[i][j]=1+min({insertion,deletion,replace});
    }
    int minDistance(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int j=0;j<=m;j++) dp[0][j]=j;
        for(int i=0;i<=n;i++) dp[i][0]=i;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                 if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1];

                else {
                    int insertion=dp[i][j-1];
                    int deletion=dp[i-1][j];
                    int replace=dp[i-1][j-1];

                    dp[i][j]=1+min({insertion,deletion,replace});
                }
            }
        }
        return dp[n][m];

    }
};