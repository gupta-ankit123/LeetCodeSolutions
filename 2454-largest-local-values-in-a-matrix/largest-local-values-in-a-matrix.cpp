class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int rows=grid.size();
        int col=grid[0].size();
        vector<vector<int>> ans;
        
        for(int i=0;i<rows-2;i++){
            vector<int> temp;
            for(int j=0;j<col-2;j++){
                int val1=max({grid[i][j],grid[i][j+1],grid[i][j+2]});
                int val2=max({grid[i+1][j],grid[i+1][j+1],grid[i+1][j+2]});
                int val3=max({grid[i+2][j],grid[i+2][j+1],grid[i+2][j+2]});
                int val=max({val1,val2,val3});
                temp.push_back(val);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};