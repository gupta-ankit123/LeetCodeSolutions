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
    bool isMirror(TreeNode* left,TreeNode* right){
        if(left==NULL && right==NULL){
            return true;
        }
        if(left!=NULL && right==NULL){
            return false;
        }
        if(left==NULL && right!=NULL){
            return false;
        }

        if(left->val==right->val && isMirror(left->left,right->right) && isMirror(left->right,right->left)){
            return true;
        }

        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        return isMirror(root->left,root->right);
    }
};