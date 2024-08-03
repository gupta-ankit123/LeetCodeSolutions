class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;

        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            TreeNode* node=q.front().first;
            int level=q.front().second;
            q.pop();
            if(level>=ans.size()) ans.push_back({});

            ans[level].push_back(node->val);

            if(node->right){
                q.push({node->right,level+1});
            }
            if(node->left){
                q.push({node->left,level+1});
            }
        }
        for(int i=0;i<ans.size();i++){
            if(i%2==0){
                reverse(ans[i].begin(),ans[i].end());
            }
        }
        return ans;
    }
};