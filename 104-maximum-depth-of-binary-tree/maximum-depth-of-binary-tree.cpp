
class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL ) return 0;

        int left=height(root->left);
        int right=height(root->right);
         return max(left,right)+1;
    }
    int maxDepth(TreeNode* root) {
        return height(root);
    }
};