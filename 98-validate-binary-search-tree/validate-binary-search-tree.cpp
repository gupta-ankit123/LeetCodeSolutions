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

    vector<int> inorder(TreeNode* root,vector<int> &ans){
        if(!root){
            return ans;
        }
        stack<TreeNode*> st;
        TreeNode* curr=root;
        while(curr || !st.empty()){
            while(curr){
                st.push(curr);
                curr=curr->left;
            }
            curr=st.top();
            st.pop();
            ans.push_back(curr->val);
            curr=curr->right;
        }
        return ans;
    }
    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        int i=0;
        for(int j=i+1;j<ans.size();j++ ){
            if(ans[i]<ans[j]){
                i++;
            }
            else{
                return false;
            }
        }
        return true;
    }
};