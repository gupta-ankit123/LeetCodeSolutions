class Solution {
public:

    void dfs(int row,int col,vector<vector<int>>& ans,vector<vector<int>>& image,int drow[],
     int dcol[],int iniColor,int color){
        ans[row][col]=color;
        int n=image.size();
        int m=image[0].size();

        for(int i=0;i<4;i++){
            int nrow=row+drow[i];
            int ncol=col+dcol[i];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==iniColor&& ans[nrow][ncol]!=color){
                dfs(nrow,ncol,ans,image,drow,dcol,iniColor,color);
            }


        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans= image;
        int iniColor=image[sr][sc];
        int drow[]={-1,0,+1,0};
        int dcol[]={0,+1,0,-1};
       

        dfs(sr,sc,ans,image,drow,dcol,iniColor,color);
        return ans;
    }
};