/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root,vector<vector<int>>& ans){
        if(!root){
            return ;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
            int level=q.size();
            for(int i=0;i<level;i++){
                TreeNode* res=q.front();
                q.pop();
                temp.push_back(res->val);
                if(res->left){
                    q.push(res->left);
                }
                if(res->right){
                    q.push(res->right);
                }

            }
            ans.push_back(temp);
            
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        solve(root,ans);
        return ans;
    }
};