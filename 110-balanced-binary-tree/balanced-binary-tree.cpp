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
    int height(TreeNode* root){
        if(!root){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        int ans=max(left,right)+1;
        return ans;

    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int left=height(root->left);
        int right=height(root->right);
        int diff=abs(left-right);

        bool ans=(diff<=1);
        bool leftAns=isBalanced(root->left);
        bool rightAns=isBalanced(root->right);

        if(ans&&leftAns&&rightAns){
            return true;
        }
        return false;

        
    }
};