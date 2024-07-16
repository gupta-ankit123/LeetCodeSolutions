class Solution {
public:
    void solve(int index,vector<int>&arr,vector<vector<int>>& ans,vector<int>&ds){
        if(index==arr.size()){
            ans.push_back(ds);
            return;
        }

        ds.push_back(arr[index]);
        solve(index+1,arr,ans,ds);
        ds.pop_back();
        solve(index+1,arr,ans,ds);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ds;
        vector<vector<int>>ans;
        vector<vector<int>>ans1;
        solve(0,nums,ans,ds);
        set<vector<int>> st;
        for(auto it:ans){
            st.insert(it);
        }
        for(auto it:st){
            ans1.push_back(it);
        }
        return ans1;
    }
};