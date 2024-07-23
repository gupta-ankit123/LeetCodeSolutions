class Solution {
public:
    int goodNodes(TreeNode* root) {
        if(root==NULL) return 0;
        if(root->right==NULL && root->left==NULL ){
            return 1;
        }

        int count=0;
      
        queue<pair<TreeNode*,int>>q;
        q.push({root,root->val});

        while(!q.empty()){
            TreeNode* node=q.front().first;
            int maxi=q.front().second;
            if(node->val>=maxi){
                count++;
                maxi=node->val;
            }

            q.pop();
            if(node->left){
                q.push({node->left,maxi});
            }

            if(node->right){
                q.push({node->right,maxi});
            }
        }
        return count;
    }
};