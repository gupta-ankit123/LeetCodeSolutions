class Solution {
public:

    int rowFlip(vector<int>&row){
        int n=row.size();
        int flip=0;
        for(int i=0;i<n/2;i++){
            if(row[i]!=row[n-1-i]) flip++;
        }
        return flip;
    }

    int colFlip(int col,vector<vector<int>>& grid){
        int m=grid.size();
        int flip=0;
        for(int i=0;i<m/2;i++){
            if(grid[i][col]!=grid[m-1-i][col]) flip++;
        }
        return flip;
    }
    int minFlips(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        int row=0;
        for(int i=0;i<n;i++){
            row+=rowFlip(grid[i]);
        }

        int col=0;
        for(int i=0;i<m;i++){
            col+=colFlip(i,grid);
        }
        return min(row,col);
    }
};