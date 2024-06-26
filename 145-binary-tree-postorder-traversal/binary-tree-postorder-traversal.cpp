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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st1,st2;
        st1.push(root);
        if(root==NULL){
            return ans;
        }

        while(!st1.empty()){
            root=st1.top();
            st1.pop();
            st2.push(root);

            if(root->left!=NULL){
                st1.push(root->left);
            }
            if(root->right!=NULL){
                st1.push(root->right);
            }
        }
        while(!st2.empty()){
            int element=st2.top()->val;
            st2.pop();
            ans.push_back(element);
        }
        return ans;
    }
};