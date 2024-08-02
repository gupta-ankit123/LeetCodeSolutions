class Solution {
public:

    int path(TreeNode* root){
        if(root==NULL) return 0;
        int left=max(0,path(root->left));
        int right=max(0,path(root->right));
        int pathSum=root->val+max(left,right);
        return pathSum;
    }
    int maxPathSum(TreeNode* root) {
        if(root==NULL) return INT_MIN;
        if(root->right==NULL && root->left==NULL) return root->val;
        int leftSum=max(0,path(root->left));
        int rightSum=max(0,path(root->right));
        int sum=root->val+leftSum+rightSum;
        sum=max(sum,root->val);

        int left=maxPathSum(root->left);
        int right=maxPathSum(root->right);
        return max({sum,left,right});
    }
};