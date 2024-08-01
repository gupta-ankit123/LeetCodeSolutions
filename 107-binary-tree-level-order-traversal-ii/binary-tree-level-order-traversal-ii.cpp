
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        vector<vector<int>>ans;

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
        reverse(ans.begin(),ans.end());
        return ans;
       
    }
};