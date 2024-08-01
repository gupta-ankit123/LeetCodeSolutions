class Solution {
public:

    bool symmetric(TreeNode*p,TreeNode* q){
        if(p==NULL && q==NULL ) return true;
        if(p==NULL && q!=NULL) return false;
        if(p!=NULL && q==NULL) return false;

        if(p->val==q->val &&p!=NULL && q!=NULL && symmetric(p->left,q->right) && symmetric(p->right,q->left)){
            return true;
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return symmetric(root->left,root->right);
    }
};