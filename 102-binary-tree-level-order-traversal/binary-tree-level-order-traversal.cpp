class Solution {
public:
    void solve(TreeNode* root,vector<vector<int>>& ans){
        if(root==NULL) return;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});

        while(!q.empty()){
            TreeNode* node=q.front().first;
            int level=q.front().second;
            q.pop();
            if(level>=ans.size()){
                ans.push_back(vector<int>());
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        solve(root,ans);
        return ans;
    }
};