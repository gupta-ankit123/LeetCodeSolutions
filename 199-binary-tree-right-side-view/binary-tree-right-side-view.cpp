class Solution {
public:

    void level(TreeNode* root,vector<vector<int>>&ans){
        if(root==NULL) return;

        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            TreeNode* node=q.front().first;
            int level=q.front().second;
            q.pop();
            if(level>=ans.size()){
                ans.push_back({});
            }
            ans[level].push_back(node->val);
            if(node->left){
                q.push({node->left,level+1});
            }
            if(node->right){
                q.push({node->right,level+1});
            }
        }

    }
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> ans;
        level(root,ans);
        vector<int> temp;
        for(auto it:ans){
            temp.push_back(it.back());
        }
        return temp;

    }
};