class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        int left=height(root->left);
        int right=height(root->right);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int leftH=height(root->left);
        int rightH=height(root->right);

        int diameter=0;
        diameter=leftH+rightH;
        int right=diameterOfBinaryTree(root->right);
        int left=diameterOfBinaryTree(root->left);
        return max({right,left,diameter});


    }
};