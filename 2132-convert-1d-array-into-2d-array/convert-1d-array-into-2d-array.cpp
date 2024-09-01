class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& arr, int m, int n) {
        
        if(m*n!=arr.size()) return {};
        vector<vector<int>>ans;
        int i=0,j=1;

        while(j<=m && i<arr.size()){
            vector<int> temp;
            for(int k=i;k<(n*j)&&k<arr.size();k++){
                temp.push_back(arr[k]);
            }
            i=j*n;
            j++;
            ans.push_back(temp);
        }
        return ans;
    }
};