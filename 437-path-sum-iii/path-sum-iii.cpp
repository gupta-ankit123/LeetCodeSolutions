class Solution {
public:
int ans=0;
    void pathFromOneRoot(TreeNode* root, long long targetSum){
        if(!root){
            return;
        }
        if(root->val==targetSum){
            ans++;
        }
        pathFromOneRoot(root->left,targetSum-root->val);
        pathFromOneRoot(root->right,targetSum-root->val);
    }

    int pathSum(TreeNode* root, long long targetSum) {
        if(root){
            pathFromOneRoot(root,targetSum);
            pathSum(root->left,targetSum);
            pathSum(root->right,targetSum);

        }
        return ans;
    }
};