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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL){
            return true;
        }
        else if(p==NULL && q!=NULL){
            return false;
        }
        else if(p!=NULL && q==NULL){
            return false;
        }

        TreeNode* curr1=p;
        TreeNode* curr2=q;
        if(curr1->val==curr2->val &&isSameTree(curr1->left,curr2->left) && isSameTree(curr1->right,curr2->right)){
            return true;
        }
        else{
            return false;
        }
        
    }
};